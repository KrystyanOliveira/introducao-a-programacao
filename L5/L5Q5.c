#include<stdio.h>
#include<locale.h>
 
main()
{
	setlocale(LC_ALL,"");
	float SAL,INSS;
	int x;
	
	for(x=1;x<=3;x++) //alterado de 10 para 3 para agilizar os testes
	{
		printf("\n **** Funcion�rio %d ****",x);
		printf("\n Informe o sal�rio   : ");
		scanf("%f",&SAL);
		INSS = SAL*11/100;
		if (INSS>318.20)
		 INSS=318.20;
		printf("\n INSS = %8.2f \n",INSS);
		
	}
}
