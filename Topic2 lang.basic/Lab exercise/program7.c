//Find the sum of even number from 1 to 20.
#include<stdio.h>

int main()
{
    int sum = 0;

    printf("The sum of even number from 1 to 20\n");

    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);

    return 0;
}