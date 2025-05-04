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

	printf("\n %d x %d = %d",n,m,n*m);		//Deu um pouco de trabalho, porque não li adequadamente a questão. Essa é a linha principal pois ela que faz o calculo da tabuada e a imprime com o conta
		if (-n)								//-dor m, mostrado em for.
		{
			printf("Numero invalido");		//condição de fim da execução
			exit(1);
		}
}
		
}
