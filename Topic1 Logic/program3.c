//Accepts a year from the user.Check if the year is a leap year or not.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a year\n");
    scanf("%d", &num);

    if(num % 4 == 0 )   
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}