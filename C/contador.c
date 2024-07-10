#include <stdio.h>//biblioteca para usar os comandos de entrada e saída.
/* este programa é um contador automatico, ou seja, o usuario seleciona o primeiro valor
e em seguida seleciona até qual valor o contador ira */
int main()
{
  //declaração do valor inicial e final
  int n_i, n_f;

  printf("Contador virtual aqui!!! \n");

  printf("Qual numero que começara a contagem? ");
  scanf("%i", &n_i);

  printf("Até qual valor vc gostaria que a contagem fosse?");
  scanf("%i", &n_f);

  // contador na estrutura for
  // comando ("for") serve para dar loop
  for (n_i = n_i; n_i <= n_f; n_i += 1)
  { // Numero inicial, numero final para parar a repetição, x+=1(significa uma soma de um em um)

    printf("%i, ", n_i);
  }

  return (0);
}