/*catogorize the operator as binary and unary
*,+,-,++,!,--  */

#include<stdio.h> 

int main()
{
    int x = 10, y = 20, result;

    //Binary Multiplication 

    result = x * y;
    printf("%d\n", result);

    //Binary addition

    result = x + y;
    printf("%d\n",result);

    //Binary subtraction

    result = x - y;
    printf("%d\n",result);

    //Unary increment 

    x++;
    printf("%d\n",x);

    //Unary not

    result = !y;
    printf("%d\n",result);

    //Unary decrement

    x--;
    printf("%d\n",x);

    return 0;
}