#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string name = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0; i < strlen(name); i++){  // there is design inefficiency here read below comments for more
        printf("%c", name[i]);
    }
    printf("\n");
}


/*
 * strlen(name) is a helper function that returns the length of a string, and using line 3 lets us use this function.
 * the line 8 inefficiency can be solved by calling strlen(name) only once, with how the current code is,
  its being called as many times as the input string's length'.
  replace with following canonical syntax
  * for (int i = 0, n = strlen(name); i < n; i++){ // here initialization only occurs at the start of the loop, type should be same for this to work.
    ...
    }
*/

