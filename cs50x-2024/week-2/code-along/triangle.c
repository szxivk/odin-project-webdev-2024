#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int valid_triangle(float a, float b, float c);

int main(int argc, string argv[]){
    if(argc!=4){
        printf("enter command ./triangle side1 side2 side3\n");
        return 1;
    }
    // 0 -> false
    if(valid_triangle(atof(argv[1]), atof(argv[2]), atof(argv[3])) == 0){
        printf("invalid triangle!\n");
        return 0;
    }
    printf("valid triangle!\n");
}

int valid_triangle(float a, float b, float c){
    // note: there are multiple ways to this
    // return true (i.e., 1) if triangle condition is met
    if (a+b > c && a+c > b && b+c > a){
        return 1;
    }
    return 0;
}
