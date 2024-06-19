#include <stdio.h>

int main()
{

    int numero, antecessor, sucessor, operador, resultado;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("o sucessor e antecessor de %i é:\n", numero);
    printf("%i e %i, respectivamente. \n", sucessor, antecessor);

    printf("E a sua tabuada seria: \n");

    operador = 1;
    do
    {
        resultado = numero * operador;
        printf("%i x %i = %i \n", numero, operador, resultado);
        operador += 1;
    } while (operador <= 10);

    return 0;
}