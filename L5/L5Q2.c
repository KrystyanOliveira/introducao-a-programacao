#include<stdio.h>
main()
{
	float raio,altura,volume;
	int x;
	
	for(x=1;x<=3;x++) //alterado de 10 para 3 para agilizar os testes
	{
		printf("\n **** Entrada %d ****",x);
		printf("\n Informe o raio   : ");
		scanf("%f",&raio);
		printf("\n Informe a altura : ");
		scanf("%f",&altura);
		volume= 3.14159 * (raio*raio) * altura;
		printf("\n Volume= %f",volume);
		
	}
}
