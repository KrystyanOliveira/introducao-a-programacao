#include<stdio.h>
main()
{
	float VENDA, DESC, PAGO;
	printf("\n Valor da Venda: ");
	scanf("%f",&VENDA);
	if (VENDA > 1000)
	  DESC = VENDA*10/100;
	else
	  DESC = 0;
	PAGO = VENDA-DESC;
	printf("\n Valor pago= %8.2f",PAGO);  	
}



