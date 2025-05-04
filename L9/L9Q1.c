#include <stdio.h>
int quadrado (int n)
{
	return n*n;
}

main() 
{
  int numero;  

  printf("\nEntre com um numero inteiros nao-nulo:  ");
  scanf("%d", &numero);
  printf("O quadrado do numero %d e' %d\n", numero,quadrado(numero));
  
}


