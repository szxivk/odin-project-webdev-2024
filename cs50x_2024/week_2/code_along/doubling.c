#include <cs50.h>
#include <stdio.h>

int main(void){

    int s = get_int("size of arr: ");
    int arr[s];
    arr[0] = 1;
    printf("%i ", arr[0]);
    for (int i = 1; i < s; i++){
        arr[i]=arr[i-1]*2;
        printf("%i ", arr[i]);
    }
    printf("\n");
}
