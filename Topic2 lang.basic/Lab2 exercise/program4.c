//write a program to add two numbers and store the result in a third variable .
#include<stdio.h>

int main()
{
int x, y, result;

printf("Enter first number\n");
scanf("%d", &x);
printf("Enter second number\n");
scanf("%d", &y);

result = x + y;

printf("The sum of two number is %d \n",result);

return 0;

}