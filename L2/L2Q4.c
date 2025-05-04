#include<stdio.h>
main()
{
	float SALDO,CREDITO;
	printf("\n Saldo Medio: ");
	scanf("%f",&SALDO);
	if (SALDO < 200)
	 CREDITO = 0;
	else if (SALDO < 400)
	      CREDITO = SALDO*20/100;
	 	 else if (SALDO < 600)
	           CREDITO = SALDO*30/100;
	          else
	           CREDITO = SALDO*40/100;
   printf("\n Saldo Medio = %8.2f", SALDO);
   printf("\n Credito     = %8.2f", CREDITO);
}

