#include <stdio.h>
#include <stdlib.h>

#define FILE_SIZE 1024
#define TAPE_SIZE 1000

void idk_compiler(char* code) {
    int *data;
    int ptr = 0;
    int bucket = 0;
    int start_bucket = 0;
    data = (int*)calloc(TAPE_SIZE, sizeof(int));

    for (int x = 0; x < 10; x++) {
        data[x] = x+1;
    }

    while (*code != 0) {
        *code++;
        switch(*code) {
            case 'i':
                ptr++;
                break;

            case 'd':
                ptr--;
                break;

            case 'I':
                data[ptr]++;
                break;
            
            case 'D':
                data[ptr]--;
                break;

            case 'k':
                printf("%c", data[ptr]);
                break;
            
            case 'K':
                printf("%d\n", ptr);
                break;
            
            case '_':
                for (int x = 0; x < TAPE_SIZE; x++) {
                    printf("%d\n", data[x]);
                }
                break;
            
            case '?':
                start_bucket = data[ptr];
                while(1) {
                    *code++;

                    if (*code == '?') {
                        break;
                    }

                    switch(*code) {
                        case 'i':
                            ptr++;
                            break;
                        case 'd':
                            ptr--;
                            break;
                        case '@':
                            bucket = data[ptr];
                            break;
                        
                        case '*':
                            data[ptr] = start_bucket * bucket;
                            break;

                        case '/':
                            data[ptr] = start_bucket / bucket;
                            break;
                        
                        case '+':
                            data[ptr] = start_bucket + bucket;
                            break;

                        case '-':
                            data[ptr] = start_bucket - bucket;
                            break;                
                    }
                }
        }
    }

    free(data);
}


int main(int argc, char **argv) {
   
    char buff[FILE_SIZE];
    FILE *f = fopen(argv[1], "r");
    fgets(buff, FILE_SIZE, f);

    idk_compiler(buff);
    
}
