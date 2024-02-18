/* Usando os operadores & e * */
#include <stdio.h>

int main() {

    int a; // a é um inteiro
    int *aPtr; // aPtr é um ponteiro para um inteiro

    a = 7;
    aPtr = &a;

    printf("O Endereco de a e %p\n"
            "O Valor de aPtr e %p\n\n", &a, aPtr);
    
    return 0;
}