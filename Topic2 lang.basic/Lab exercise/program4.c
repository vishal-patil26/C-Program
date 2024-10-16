//Find whether the number accepted from the user is positive or negative.
#include<stdio.h>

int main()
{
    int x;

    printf("Enter an number to check Positive or Negative\n");

    scanf("%d", &x);

    if(x > 0)
    {
        printf("Positive number\n");
    }
    else if(x < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}