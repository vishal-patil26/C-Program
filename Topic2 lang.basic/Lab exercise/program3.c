//Find weather a given number is even or odd and accordingly display the message "Odd" "Even".
#include<stdio.h>

int main()
{
    int x;

    printf("Enter an number to check Even or Odd number\n");

    scanf("%d", &x);

    if(x % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }

    return 0;
}