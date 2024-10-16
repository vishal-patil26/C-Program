/*Write a program that accepts two numbers as numerator and denominator
from the user and display the quotient and remainder.*/

#include<stdio.h>

int main()
{
    int ne, de, qu, re;
    printf("Enter an numerator ");
    scanf("%d", &ne);
    printf("Enter an denominator ");
    scanf("%d", &de);

    qu = ne / de;
    re = ne % de;

    printf("quotient is %d and remainder is %d", qu, re);
    return 0;
}