//Crie uma fun��o em linguagem C que receba 2 n�meros e retorne o maior valor.
#include<stdio.h>
int maior (int a, int b)
{
	if (a > b)
	  return a;
	else
	  return b;  
}
main()
{
	int n1,n2;
	printf("\n Entre com o numero1: ");
	scanf("%d",&n1);
	printf("\n Entre com o numero2: ");
	scanf("%d",&n2);
	printf("\n Maior = %d",maior(n1,n2));
}
