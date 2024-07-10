#include <stdio.h>//biblioteca para usar os comandos de entrada e saída.
#include <conio.h>//biblioteca conio, para funcionar o getch.
/* esse programa é uma calculadora basica com capacidade para calcular operações aritméticas simples
de 2 valores */
int main()
{
    //declaração das variaveis
    char operador;
    float n1, n2, resultado;

    //entrada  do operador aritmético
    printf("Digite o operador: (+ - / *) \n"); // operador "!=" significa diferente
    scanf("%c", &operador);

    //entrada dos 2 valores desejados
    printf("Digite dois valores: \n");
    scanf("%f %f", &n1, &n2);

    switch (operador) //estrutura que faz o calculo e retorna o output
    {

    case '+':
        resultado = n1 + n2;
        printf("Seu resultado: %.2f", resultado);
        break;

    case '-':
        resultado = n1 - n2;
        printf("Seu resultado: %02f", resultado);
        break;

    case '/':
        resultado = n1 / n2;
        printf("Seu resultado: %0.4f", resultado);
        break;

    case '*':
        resultado = n1 * n2;
        printf("Seu resultado: %0.2f", resultado);
        break;

    default: // mensagem de erro caso o usuario use algum comando errado
        printf("Algo deu errado.");
        break;
    }

    getche();
    return 0;
}