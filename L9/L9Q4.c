#include<stdio.h>
float converteReal (float d, float c)
{
	return d * c;
}

main()
{
	float VDOLAR, CDOLAR;
	printf("Entre com a quantidade de dolares: ");
	scanf("%f",&VDOLAR);
	printf("Entre com a cotacao do dolar     : ");
	scanf("%f",&CDOLAR);
	printf("\n Valor em Reais: %8.2f",converteReal(VDOLAR,CDOLAR));
	
}

