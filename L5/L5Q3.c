#include<stdio.h>
main()
{
	float A,B,AUX;
	int x;
	
	for(x=1;x<=3;x++) //alterado de 5 para 3 para agilizar os testes
	{
		printf("\n **** Entrada %d ****",x);
		printf("\n Informe o valor de A   : ");
		scanf("%f",&A);
		printf("\n Informe o valor de B   : ");
		scanf("%f",&B);
		AUX = A;
		A = B ;
		B = AUX;
		printf("\n A = %f",A);
		printf("\n B = %f",B);		
	}
}
