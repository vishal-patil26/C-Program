//Accepts the number from the user and check if it divisible by 5.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if(num % 5 == 0)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf("It is not divisible by 5");
    }
    return 0;
}