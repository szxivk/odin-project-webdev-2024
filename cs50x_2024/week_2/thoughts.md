# taking a look underneath the hood of a compiler

- source code --> preprocessing --> compiling --> assembling --> linking -> machine code
    - preprocssing does a bit of find and replace (involves the preprocessing lines which start with `#`).
    - compiling: after above step compiles sourcecode to assembling language.
    - assembling: takes assembly code and converts it to 0s & 1s.
    - linking: combiles all files involved in our project and links them all together (eg. our `hello.c` file included `cs50.c` and `stdio.c` files --> `.h` are header files & they include basically prototypes (not the whole functions) of functions written in their resp. `.c` files)
    - The `make` command we use actually runs something called `clang` command (which requires use to use arguments n options to run as we what it to run). `Make` abstracts it all away from us.
    - computer's memory (Random access memory) is kinda this canvas that you can manipulate the bits on to store numbers anywhere you want in it. a canvas of bytes.
# Arrays
- syntax
    ```c
    int scores[3]; // this is how you define 1 variable to tuck away 3 values in that variable. this line tells the computer, give me (enough room for) an array of size 3 -> declaration
    scores[0] = 72; // means go into this array at location ("index") 0 & put value 72 there -> assignment
    scores[1] = 73;
    scores[2] = 33;
    ```
- an array is a sequence of values back to back to back in memory. its just a chunk of memory storing values back to back to back.

**NOTE**: its commonplace to capitalize a variable, if its a constant (eg. `const int N;`)
 - read about global vs local variable
 - array as an parameter for a function: 
 ```c
 float avg(int length, int array[]);
 ```
 - watch from 1:14:00 of lecture 2