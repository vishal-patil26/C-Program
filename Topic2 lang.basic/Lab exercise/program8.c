//Find the factorial of a number.
#include<stdio.h>

int main()
{
    int x, fact = 1;

    printf("Enter an number for factorial value\n");

    scanf("%d", &x);

    for(int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }

    printf("%d ", fact);

    return 0;
}