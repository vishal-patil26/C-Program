/*Accept a character from the user.It may be an alphabet, digit or any 
other character.print ASCII value.*/
#include<stdio.h>

int main()
{
    char ch;

    printf("Enter an character\n");

    scanf("%c", &ch);

    printf("The ASCII value is %d\n", ch);      //%d print the ascii vale of character

    return 0;

}