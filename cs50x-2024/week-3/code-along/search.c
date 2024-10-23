#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int arr[5] = {2,5,14,0,25};
    int n = get_int("Num: ");
    for (int i =0; i<5; i++)
    {
        if (arr[i] == n)
        {
            printf("FOUND!\n");
            return 0;
        }
    }
    printf("Not Found!\n");
    return 0;
}
