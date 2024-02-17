/* Calcula a soma dos elementos de um array */
#include <stdio.h>

#define TAM 10

int main()
{
    char string[20], string2[] = "abc";
    int i;

    printf("Entre com uma string: ");
    scanf("%s", string);

    printf("string e: %s\nstring2 e: %s\n"
        "string com espaços entre caracteres e:\n", string, string2);

    
    for (i = 0; string[i] != '\0'; i++)
        printf("%c", string[i]);

    printf("\n");
    size_t len = sizeof(string2) / sizeof(string2[0]);
    printf("o tamanho de size_t e: %d \n", len);
    return 0;
}