/*
 * start
 * ask input from both players convert all to caps and store it in single array
 * create array of characters A to Z or use their ASCII codes 65 to 90
 * loop through the both string characters
    score them accordingly
 * compare scores
 * output winner
 * end


*/
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int score_string(string input);

int main(void){

    string arr[2];
    for (int i=0; i<2; i++){
        arr[i]= get_string("Player %i: ", i+1);
    }
    //printf("%s %s\n", arr[0], arr[1]);
    //printf("%i %i\n", score_string(arr[0]), score_string(arr[1]));
    if (score_string(arr[0]) > score_string(arr[1])){
        printf("Player 1 wins!\n");
    }
    else if (score_string(arr[0]) < score_string(arr[1])){
        printf("Player 2 wins!\n");
    }
    else {
        printf("Tie!\n");
    }
}


int score_string(string input){

    int score = 0;
    int len = strlen(input);
    for (int i = 0; i<len; i++){
        input[i] = toupper(input[i]);
        if (input[i] >= 65 && input[i] <= 90){
            score += POINTS[input[i] - 'A']; // i couldve never guessed this scoring math
        }
        else {
            score += 0; // 0 score for char other than A to Z
        }
    }
    return score;
}
