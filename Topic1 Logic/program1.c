//Accepts two number from the user.Find which is greater and print it

#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter first value ");
    scanf("%d", &num1);
    printf("Enter second value ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("Greater value is %d",num1);
    }
    else
    {
        printf("Greater value is %d",num2);
    }
    return 0;
}

