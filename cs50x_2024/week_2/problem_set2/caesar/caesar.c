#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrpyt(char c, int n);

int main(int argc, string argv[]){
    if (argc != 2){
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, len = strlen(argv[1]); i < len; i++){
        if (!isdigit(argv[1][i])){
            return 1;
        }
    }

    int key = atoi(argv[1]);
    if (key <= 0){
        printf("key should be a +ve integer\n");
        return 1;
    }
    string ptext = get_string("plaintext:  ");
    printf("ciphertext: ");

    for (int i = 0, len = strlen(ptext); i < len ; i++){
        if (isalpha(ptext[i])){
            encrpyt(ptext[i], key);
        } else {
            printf("%c", ptext[i]);
        }

    }
    printf("\n");

}

void encrpyt(char c, int n){

    if (islower(c)){
        c = ((c - 'a') + n) % 26;
        printf("%c", c + 'a');
    } else {
        c = ((c - 'A') +n ) % 26;
        printf("%c", c + 'A');
    }

}
