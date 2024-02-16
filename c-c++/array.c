/* inicializando um array */

#include <stdio.h>

int main()
{
    int num1[5], i;

    for(i = 0; i <= 5; i++)
    {
        num1[i] = i;
        printf("\no valor de num1[%d] e: %d",i, num1[i]);
    }

    printf("\n -----------------------------------------------------  \n");
    printf("\n");

    return 0;
}