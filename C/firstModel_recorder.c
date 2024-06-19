#include <stdio.h> //biblioteca para usar os comandos de entrada e saída.
#include <conio.h> //biblioteca conio, para funcionar o getch.

struct dados
{ // struct para criar um tipo de dado que vai conter os dados dos clientes.
    int codigo, idade;
    char nome[50], sexo[10]; // declaração das variáveis
    float salario;
};

struct dados cliente[5]; // declarando a variavel que vai armazenar os dados dos clientes.

void Perfil(int i) // declaração da função Perfil, que tem como função a impressão dos dados cadastrados dos clientes.
{
    printf("\n+++++++++++++++++++++++++++\n");
    printf("\nDADOS DOS CLIENTES CADASTRADOS\n");
    printf("\n+++++++++++++++++++++++++++\n");
    for (i = 0; i <= 4; i += 1) // estrutura de repetição para mostrar todos os dados de forma autônoma.
    {
        printf("\nCliente: --%i--", i); // prefiri deixar os cliente alocados com base na memória, para ser mais facil sua localização.
        printf("\nNome: %s", cliente[i].nome);
        printf("\nSexo: %s", cliente[i].sexo);
        printf("\nIdade: %i", cliente[i].idade);
        printf("\nCódigo: %i", cliente[i].codigo);
        printf("\nSalário: %.2f", cliente[i].salario);
        printf("\n+++++++++++++++++++++++++++\n");
    }
}

float soma_idades()
{
    float somatorio;

    somatorio = cliente[0].idade + cliente[1].idade + cliente[2].idade + cliente[3].idade + cliente[4].idade;

    return somatorio;
}

int main(void)
{             // função principal, como parâmetro void.
    int l, i; // declarando variavel do tipo inteiro.
    float media;

    l = 1;
    printf("=======Cadastro de CLientes=======\n"); // printf para impressão na tela.

    for (i = 0; i <= 4; i += 1)
    { // loop com repetições pré-definidas. Com o objetivo de receber os dados dos clientes.

        fflush(stdin); // comando para limpar o buffer do teclado e evitar estouro de buffer causado pelas funções scanf e fgets.
        printf("=======Cliente: %i=======\n", l);

        printf("\nQual seu nome?\n");
        fgets(cliente[i].nome, 51, stdin); // fiz a troca do gets por fgets para evitar o estouro de buffer que pode ocorrer no gets

        printf("\nQual a sua idade?\n");
        scanf("%i", &cliente[i].idade); // usado scanf para receber o valor inteiro.
        fflush(stdin);

        printf("\nQual seu sexo?\n");
        fgets(cliente[i].sexo, 11, stdin); // utilizado fgets ao invés do scanf, pelo fato de que o scanf não recebe valores strings.
        fflush(stdin);

        printf("\nQual seu código\n");
        scanf("%i", &cliente[i].codigo);

        printf("\nQual seu salário\n");
        scanf("%f", &cliente[i].salario);

        l = l + 1; // operação utilizada para que seja imprimido o respectivo identificador do cliente.
    }
    Perfil(i);                 // chamando a função Perfil para imprimir os dados dos usuários, com o parâmetro i para referenciar a variavel em questão.
    media = soma_idades() / 5; // aqui eu faço a variavel média usando a função soma_idades e dividindo por 2 para dar a média.

    printf("\nA soma das idades é:\n");
    printf("%.0f", soma_idades());
    printf("\n=================================\n");

    printf("A média das idades é:\n");
    printf("%.2f", media);

    getch();  // função utilizada para que o software somente execulte o return 0, apó pressionar ENTER.
    return 0; // comando para encerrar o programa.
}