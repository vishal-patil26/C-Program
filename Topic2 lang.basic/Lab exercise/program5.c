//Accept the age from the user and display appropriate message for issuing licence.
#include<stdio.h>

int main()
{
    int x;

    printf("Enter your age to check you are eligible for licence or not\n");

    scanf("%d", &x);

    if(x >= 18)
    {
        printf("Issue license\n");
    }
    else
    {
        printf("No license\n");
    }

    return 0;
}