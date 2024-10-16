//Write a program to swap using third variable and without using third variable.
#include<stdio.h>

int main()
{
    int x, y, temp;

    printf("Enter first number \n");
    scanf("%d", &x);
    printf("Enter second number \n");
    scanf("%d", &y);

 /* temp = x;           //using third variable
    x = y;
    y = temp;

    printf("The swap value is %d and %d\n",x , y);
*/
    x = x + y;          //without third variable
    y = x - y;
    x = x - y;

    printf("The swap value is %d and %d\n",x , y);

    return 0;
}