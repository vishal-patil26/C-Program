/*Categorize the operators as relational or logical oprators or other
<=,==,=,>,&&,||,! */

#include<stdio.h>

int main()
{
     int x = 27, y = 61, z = 26, result;

     //Relational operator
     result = (x <= y);
    printf("%d\n",result);

    //Relational operator
    result = (x == y);
    printf("%d\n",result);

    //Relational operator
   result = (x > y);
   printf("%d\n",result);

   //Logical operator 
    result = (x > y) && (y<z);
    printf("%d\n",result);

    //Logical operator
    result = (x < y) || (y || z);
    printf("%d\n",result);

    //Logical operator 
    result = !(z > y);
    printf("%d\n",result);

    //Assignment operator
    result = x = z;
    printf("%d\n",result);

    return 0;

}
