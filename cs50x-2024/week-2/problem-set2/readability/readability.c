/*
 counting only letter
 counting space +1 + words
 counting . ! ? indicates sentences

*/

#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int count_letter(string t);
int count_word(string t);
int count_punc(string t);

int main(void){

    //ask for text

    string text = get_string("Text: ");
    int letters = count_letter(text);
    int words = count_word(text);
    int sentences = count_punc(text);

    //calculate n print index
    float L = ((float) letters / words) * 100;
    float S = ((float) sentences / words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    if (grade >= 16){
        printf("Grade 16+\n");
    }
    else if (grade <= 1){
        printf("Before Grade 1\n");
    }
    else {
        printf("Grade %i\n", grade);
    }
}

int count_letter(string t){
    int c = 0;
    for (int i =0, len = strlen(t); i < len; i++){
        if (isalpha(t[i])){
            c++;
        }
    }
    return c;
}

int count_word(string t){
    int c = 0;
    for (int i =0, len = strlen(t); i < len; i++){
        if (isspace(t[i])){
            c++;
        }
    }
    return c+1;
}

int count_punc(string t){
    int c = 0;
    for (int i =0, len = strlen(t); i < len; i++){
        if (t[i] == 33 || t[i] == 46 || t[i] == 63){ // !, . , ? as sentence stoping punc
            c++;
        }
    }
    return c;
}
