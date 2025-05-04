#include<stdio.h>
float calculaPrestacao (float v)
{
	return v/5;
}
main()
{
	float VALOR;
	printf("Entre com a valor do produto: ");
	scanf("%f",&VALOR);
    printf("\n Valor das prestacoes: %8.2f",calculaPrestacao(VALOR));
	
}

