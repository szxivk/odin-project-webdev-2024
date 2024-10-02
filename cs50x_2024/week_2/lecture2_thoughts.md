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

    // or

    int scores[3] = {72, 73, 33};
    ```
- an array is a sequence of values back to back to back in memory. its just a chunk of memory storing values back to back to back.

**NOTE**: its commonplace to capitalize a variable, if its a constant (eg. `const int N;`)
 - read about global vs local variable
 - array as an parameter for a function: 
 ```c
 float avg(int length, int array[]);
 ```
 - string is just an array of characters and can be manipulated like an array.
    - but how do we set its size?
        - at the end of a string eg `string s = "HI!"`, if `s[2] = '!'`, there is hidden `s[3]` value , a sentinal value at the end which is automatically set to `00000000` -> single byte 0 or 8 0 bit (technically a char-based representation of a 0 -> `\0` or known as `NUL`), which tells the computer the string stops here.
        - 8 0 bits is NUL in ASCII
    - therefore, a string is n+1 bytes , n being number of characters in the string. 1 extra byte for the zero value.
- string can also be stored in arrays and they act like 2D arrays (meaning you can even access the characters inside the strings inside the array). 
    - syntax:
    ```c
    string words[2];
    words[0]="HI!";
    words[1]="BYE!";
    ```
# Making Code that take commandline arguements.

- syntax:
    ```c
    // we were using int main(void)
    int main (int argc, string argv[]){
        ...
    }
    ```

- argc & argv stands for argument count (how many words did the human type at the prompt) & argument vector (vector is generally another term for an array -> a list of values or in this case, commandline arguments)
    - check out status.c in code_along folder of week_2

## Exit statuses

- check out status.c in code_along folder of week_2

# Cryptography

- encryption: scrambling info so that only you and the recipient can receive it
    - plaintext + key --> cipher (encrypting algorithm) --> ciphertext
