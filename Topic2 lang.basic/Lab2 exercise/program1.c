//Using escape sequences; \n,\t,\r,\",. Observe the differences in the output.
#include<stdio.h>

int main()
{
    printf("Wellcome to my world\n");   
    printf("Well\tcome to my world\n");   //using as a tab space
    printf("Well\rcome to my world\n");   //star reading from \r
    printf("Wellcome to my \"world\"\n");   //use for " xyz "
    
    return 0;

}