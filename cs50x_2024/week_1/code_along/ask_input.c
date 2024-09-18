#include <stdio.h>
#include <cs50.h>

int main(void){
    string ans = get_string("what is your name? ");
    printf("hello, %s!\n", ans);
}


/*
 * cs50.h header file gives a sort of training wheels before actually using standard libraries.
   makes it easier to code for beginners.
 * the compiler processes the code from top to bottom and left to right, similar to how you read a book.
 * in line 5 of the code, we are getting an input from the user,
   intializing that input value to a "variable" named "ans" as a "string" datatype. Thats how "Statically typed languages" roll.
 * In C, we have to pre-define the return type of function as well as the type of variable it is taking or accepting.
 * in line 6, we are using format code "%s" as a placeholder and then giving "ans" variable as an argument
   to "printf" standard function to format (to place "ans" in the) the string argument (the string inside the quotes).
 * more about these format codes / placeholders I will write in this weeks thoughts.md file.
 * thats why ide help color code everything - variables, functions, format code etcs.
 */
