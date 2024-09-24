//    #  #      0
//   ##  ##     1
//  ###  ###    2
// ####  ####   3
// 0123456789

#include <cs50.h>
#include <stdio.h>

int main(void){
    int n;
    do {
        n = get_int("height: ");
    } while (n < 1);
    // loops for the pattern
    for (int i = 0; i < n; i++){
        int tw = n+n+2; //total width -> tw
        for(int j = 0; j < tw; j++){
            if (j < n  &&  j > n-i-2){
                printf("#");
            }
            else if (j > tw*0.5 && j < tw-(n-i-1)) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
