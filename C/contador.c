#include <stdio.h>
#include <stdlib.h>

int main()
{

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