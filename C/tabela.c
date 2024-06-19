#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int x, cod, y;
	char nome[50];
	float preco;

	printf("Quantos produtos vc deseja cadastrar?\n");
	scanf("%i", &y);

	for (x = 1; x <= y; x += 1)
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