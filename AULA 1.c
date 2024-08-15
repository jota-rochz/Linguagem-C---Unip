#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
    int numero1;
    int numero2;
    int soma;

    printf("Digite o primeiro inteiro\n");
    scanf ("%d", &numero1);

    printf("Digite o segundo inteiro\n");
    scanf ("%d", &numero2);

    soma = numero1 + numero2;
    printf("a soma e %d\n", soma);

    return 0;
}
