#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m;
	printf("Digite o numero que sera multiplicado: \n");
	scanf("%d", &n);
	printf("*** Tabuada do %d *** \n", n);
	
	for (m=0; m <= 10; m++)
{

	printf("\n %d x %d = %d",n,m,n*m);		//Deu um pouco de trabalho, porque n�o li adequadamente a quest�o. Essa � a linha principal pois ela que faz o calculo da tabuada e a imprime com o conta
		if (-n)								//-dor m, mostrado em for.
		{
			printf("Numero invalido");		//condi��o de fim da execu��o
			exit(1);
		}
}
		
}
