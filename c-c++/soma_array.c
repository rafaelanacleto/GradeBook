/* Calcula a soma dos elementos de um array */

#include <stdio.h>

#define TAM 10

int main()
{
    int a[TAM] = {1,2,3,4,6,7,8,9,10}, i, total = 0;

    for(i = 0; i <= TAM; i++)
        total += a[i];

    printf("\nSoma de todos os elementos e: %d", total);

    printf("\n -----------------------------------------------------  \n");
    printf("\n");

    return 0;
}