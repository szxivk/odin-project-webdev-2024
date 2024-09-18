#include <cs50.h>
#include <stdio.h>

// takes user's name as input and greats him
int main(void){

    string name = get_string("Whats you name? ");
    printf("hello, %s\n", name);
}
