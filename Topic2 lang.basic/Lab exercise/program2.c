//Find the maximum of two number and display it.

#include<stdio.h>

int main()
{
    int num1, num2, result;

    printf("Enter a number\n");
    scanf("%d", &num1);
    printf("Enter a number\n");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("%d\n", num1);
    }
    else
    {
        printf("%d\n",num2);
    }

    return 0;
}