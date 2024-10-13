#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[]){
     if (argc != 2){
        printf("use proper arguement\n");
        return 1;
     }
    for (int i = 0, len = strlen(argv[1]); i < len-1; i++){
        if (argv[1][i] > argv[1][i+1]){  // remember how characters are numbers too in ASCII context,  capital A = 65 in ASCII, B = 66...etc
            printf("Not in alphabetical order.\n");
            return 0;
        }
    }
    printf("In alphabetical order.\n");

}
