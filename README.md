## idk programming language
*  [general info](#general-info)
*  [example](#Example)
*  [usage](#usage)
*  [setup](#setup)
*  [final note](#final-note)

## general info
idk is the eosteric programming language that is designed to hurt your brain as much as possible.


## example
the following program prints "Hello World!"

```
iiiii iiiii II ?d@i*? iIIIII ?dd@ii*??d@ii*? ?ddd@iii/? d?d@iii+?IIk d?ii@+?Ik ?i@+?IIIIIIIk k ?i@+?IIIk  dddddd?d@ddd+?IIkiiiiiiiiii  ?i@+?IIIIIIIIkdk?ii@+?IIIkdddkdddkdd?d@i+?IIIk
```

## usage

### introduction
The language imitates a Turing Machine where user can move head of the tape and also 
do arithmetic operations in a desired state. However, a tape consists of 1000 states,
where first 10 states are initialized with 1 to 10 respectively; other states are initialized with 0. In addition, 
the language consists of 8 commands and are executed sequentially. 

The language consists of 9 characters. Other characters are treated as comment and will not result in error.

|Character  | Definition |
|----       |--------
|i          | move head forward by a single step    |
|d          | move head backward by a single step   |
|I          | increment (increased by one) data in a state pointed by a head |
|D          | decrement (decreased by one) data in a state pointed by a head |
|k          | output a data in a state pointed by a head as char|
|K          | output a state pointed by a head |
|?          | select a number to do arithmetic operation on first call and write a result in a state pointed by a head on second call |
|@          | select other number to do arithmetic operation| 
|_          | print all data in a tape |

### arithmetic operation
the symbol '?' acts similar to a bracket, which is meant to call twice to complete arithmetic operation.
Given A and B are stored in a tape The first call selects a data in a state as A where B is selected by calling a symbol "@". Inside bracket, 
user can move head. The desired operator should be called at last before calling '?' for second time. For example, given a head points at state 4 which stores A,
?ddd@iiii+? means that B is acquired at state 1 and A+B is stored at state 5

|operator   |Definition |
|----       |----       |
|+          | A+B       |
|-          | A-B       |
|*          | A*B       |
|/          | A/B       |


## setup
- download the repository
- enter the directory of this repository
- run the following code:
```
>> gcc idkCompiler.c -o idkCompiler.exe
>> gcc .\idkCompiler <filename>.idk
```

## final note
This is my first repository so if there is any mistakes please let me know :D
