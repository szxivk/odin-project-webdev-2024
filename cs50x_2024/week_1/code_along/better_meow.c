// written after completing learning about while/for loop, functions (and their return type and arguments declaration in c)

#include <stdio.h>

void meow (int n); // this line is the meow function's prototype. we are doing this to define meow function before the main function (so it can be called in it)

int main(void){
    meow(5);
}

void meow (int n){ //writing void instead of int n wouldve meant it takes no arguements and wouldve caused an error here
    for(int i=0; i<n; i++){
        printf("meow!\n");
    }
}

/*
 * Q: why does main function have "int" as its return value type
   A: The int return type for the main function tells the operating system if the program ran successfully.
      Returning 0 means success, and any other number means there was an error.

 * Q: what does having void as return type mean?
   A: A void return type means the function does not return any value. It simply performs an action and then exits.
*/
