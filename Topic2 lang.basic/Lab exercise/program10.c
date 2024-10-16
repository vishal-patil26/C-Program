//Consider the number is 3425.Find the sum of digits of the number and display the sum.
#include<stdio.h>

int main()
{
    int x, reminder, sum = 0;

   printf("Enter an number\n");

   scanf("%d", &x);

   while (x != 0)
   {
    reminder = x % 10;  //last number of digit.

    sum = sum + reminder;

    x = x / 10;
   }
   
   printf("The sum of the digit is %d \n", sum);

    return 0;

}