#include <cs50.h>
#include <ctype.h> //lets us use toupper() func
#include <stdio.h>
#include <string.h>

int main(void){
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i<n; i++){
        printf("%c", toupper(s[i])); //note the use of %c
    }
    printf("\n");
}
