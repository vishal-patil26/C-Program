//Accept a radius of a cicrle from the user. Find the area of the circle.

#include<stdio.h>

int main()
{
    int radius,num;
    float pi = 3.14f;

    printf("Enter a radius ");
    scanf("%d", &radius);

    num = pi * radius * radius;
    printf("%d",num);

    return 0;
}