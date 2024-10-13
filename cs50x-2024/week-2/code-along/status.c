#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]){
    if (argc != 2){
        printf("Missing argument!\n");
        return 1; // idea is that you can return any integer x (x != 0) and that x could be represent an error which you can fix quickly if the error code was properly documented by us.
    }
    printf("Hello, %s\n", argv[1]);
    return 0; // by default a errorless execution of a program returns 0.
}


/*
 * using command `echo $?` in terminal displays the exit code of the recent program executed.
 * exit codes/status codes are return values from programs that help identify problems if the program runs into any.
 * program which runs successfully by default outputs status code `0`.
 * thats why main function in a c program has a return type of `int` (int main(void)).
*/
