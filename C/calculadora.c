#include <stdio.h>
#include <conio.h>

int main()
{

    char operador;
    float n1, n2, resultado;

    printf("Digite o operador: (+ - / *) \n"); // operador "!=" significa diferente
    scanf("%c", &operador);

    printf("Digite dois valores: \n");
    scanf("%f %f", &n1, &n2);

    switch (operador)
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

    default:
        printf("Algo deu errado.");
        break;
    }

    getche();
}