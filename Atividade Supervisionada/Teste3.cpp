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

	printf("\n %d x %d = %d",n,m,n*m);
		if (-n)
		{
			printf("Numero invalido");
			exit(1);
		}
}
		
}
