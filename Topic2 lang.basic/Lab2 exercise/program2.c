/*"Type casting" Write a program to accept marks of 5 subjects from the user 
and calculate their average. Use implicit and explicit type conversion. */
#include<stdio.h>

int main()
{
    int marks[5],sum = 0;
    float average;

    printf("Enter five subjects marks\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);

        sum = sum + marks[i];
    }

    average = sum / 5;              //implicit
    average = (float)sum / 5;      //explicit

    printf("The average of the marks is %f \n", average);

    return 0;
}