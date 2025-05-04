#include<stdio.h>
main()
{
	float F,C;
	int X;
	
	for(X=1;X<=5;X++)
	{
		printf("\n **** Entrada %d ****",X);
		printf("\n Informe a temperatua em Celsius: ");
		scanf("%f",&C);
		F= (9*C+160)/5;
		printf("\n Valor em Farenheit= %f",F);
		
	}
}
