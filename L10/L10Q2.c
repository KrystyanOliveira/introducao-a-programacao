//Crie uma fun��o que receba um valor e diga se � nulo ou n�o
#include<stdio.h>
char* testaNulo (int n)
{
	if (n == 0)
	  return "Eh Nulo";
	else
	  return "Nao Eh Nulo";
}
main ()
{
	int num;
	printf("\n Entre com o numero: ");
	scanf("%d",&num);
	printf("\n %s",testaNulo(num));
}
