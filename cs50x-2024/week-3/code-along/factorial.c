#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("n: ");
    } while (n < 0);

    printf("%i\n", factorial(n));
}

int factorial(int n)
{
    // while trying to solving problems using recursion, we always first look out for a base case, here it would be

    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * factorial(n-1);
}
