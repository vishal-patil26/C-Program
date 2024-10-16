//To find whether the number accepted from the user is a prime number or not.
#include<stdio.h>

int main()
{
    int x, prime =1;

    printf("Enter an number to check prime number\n");

    scanf("%d", &x);

    if(x <= 1)
    {
        printf("Not prime number\n");
        return 0;
    }

    for(int i = 2; i <= x /2; i++)
    {
        if(x % i == 0)
        {
          prime = 0;
          break;
        }
    }

    if(prime)
    {
        printf("prime number %d \n", x);
    }
    else
    {
        printf("Not prime number %d \n", x);
    }

    return 0;
}