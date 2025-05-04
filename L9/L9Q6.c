#include<stdio.h>
float calculaVenda (float custo, float percentual)
{
	return custo + (custo*percentual/100);
}
main()
{
	float PCUSTO,PERC;
	printf("Entre com o preco de custo: ");
	scanf("%f",&PCUSTO);
	printf("Entre com o percentual    : ");
	scanf("%f",&PERC);
	
	printf("Valor da venda = %8.2f",calculaVenda(PCUSTO,PERC));
}

