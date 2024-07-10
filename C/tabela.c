#include <stdio.h>//esse é o comando da biblioteca que permite a entrada e saida de dados
#include <conio.h>//biblioteca conio, para funcionar o getch.
/*programa para criar uma tabela de produtos*/
int main()
{	//declaração das variaveis
	int x, cod, y;
	char nome[50];
	float preco;

	printf("Quantos produtos vc deseja cadastrar?\n");
	scanf("%i", &y); //comando que ira receber quantos produtos serão necessarios

	for (x = 1; x <= y; x += 1)//estrutura que vai fazer o "cadastro" dos produtos e em seguida retornara um output dos dados
	{
		printf(" Entre com o codigo do produto: ");
		scanf("%i", &cod);
		printf(" Entre com o valor do produto: ");
		scanf("%f", &preco);
		fflush(stdin);
		printf(" Entre com o nome do produto: ");
		gets(nome);

		printf("\n\nCod   = %i", cod);
		printf("\nvalor = %0.2f", preco);
		printf("\nNome  = %s\n\n", nome);
	}
	printf("\n\nFim de execução");
	getch();

	return (0);
}