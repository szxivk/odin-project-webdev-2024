#include <iostream>
using namespace std;

int main(){
    cout << "Hello, World";
    return 0;
}

/*
 * Comments in C++ are similar to C, but you can also use "//" to comment a single line
 * main difference in the first code I wrote in both c and c++ is that 
    - in c++ we use iostream instead of stdio.h to include the standard input/output library.
      Header files add functionality to C++ programs just like in C.
    - we used "using namespace std;" to avoid writing "std::" before cout
    - and we used "cout" instead of "printf" to print to the console
 * namespace is a way to avoid name conflicts in large projects.
    - eg: if you have a function called "print" in your code, 
          and you are using a library that also has a function called "print", 
          you can use namespaces to avoid conflicts.
*/