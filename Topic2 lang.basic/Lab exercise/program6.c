//Print multiples of 5 that are less than 100.
#include<stdio.h>

int main()
{
    printf("Multiples of 5\n");

    for(int i = 1; i < 100; i++)    // (i=5; i<100; i+=5)
    {
        if(i % 5 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}