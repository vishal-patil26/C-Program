//Accept a number from the user, Reverse the number and print it.

#include<stdio.h>

int main()
{
   int num , reverse;
   printf("Enter  numbers ");
   scanf("%d",&num);

   while(num > 0)
   {
    reverse = num%10;
    printf("%d",reverse);
    num = num / 10;
   } 
   return 0;
}