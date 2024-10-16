/*Write a program to calculate the sum of digit of a user entered number.Ensure that 
your program scans not more than 4digits.*/
#include<stdio.h>

int main()
{
    int x, reminder, sum = 0;

    printf("Enter an number\n");
    
    scanf("%d", &x);

    while (x != 0)
    {
        reminder = x % 10;
        sum = sum + reminder;
        x = x / 10;
    }
    
    printf("The sum of digit is %d \n", sum);

    return 0;
}