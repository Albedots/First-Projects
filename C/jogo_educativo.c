#include <stdio.h>//biblioteca para usar os comandos de entrada e saída.
/*este programa ira mostrar os sucessores, antecessores e a tabuada do numero inteiro desejado*/
int main()
{
    //declaração das variáveis
    int numero, antecessor, sucessor, operador, resultado;

    printf("Digite um numero inteiro: \n");//entrada de dados
    scanf("%i", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("o sucessor e antecessor de %i é: ", numero);
    printf("%i e %i, respectivamente. \n", sucessor, antecessor);

    printf("E a sua tabuada seria: \n");

    operador = 0;
    do  //loop que irá mostrar os dados da tabuada
    {
        resultado = numero * operador;
        printf("%i x %i = %i \n", numero, operador, resultado);
        operador += 1;
    } while (operador <= 10);

    return 0;
}