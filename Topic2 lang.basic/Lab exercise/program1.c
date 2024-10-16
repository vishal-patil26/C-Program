//Find the area of a circle whose radius accepted form the user.

#include<stdio.h>

int main()
{
    int radius, result;
    float pi = 3.14;

    printf("Enter a radius\n");
    scanf("%d", &radius);

    result = pi * radius * radius;
    printf("%d\n",result);

    return 0;
}
