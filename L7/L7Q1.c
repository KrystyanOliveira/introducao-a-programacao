#include<stdio.h>
main()
{
	float SM,SAL,P3M,SOMA=0,MEDIA;
	int QM=0,Q3M=0,TOTAL=0;
	printf("\n Entre com o salario minino: ");
	scanf("%f",&SM);
	printf("\n Entre com o salario do funcionario: ");
	scanf("%f",&SAL);
	while(SAL!=0)
	{
     TOTAL++;
	 if(SAL==SM)
	  QM=QM+1;	
	 if(SAL>3*SM)
	  Q3M++;
	 SOMA=SOMA+SAL;	
	 printf("\n Entre com o salario do funcionario: ");
	 scanf("%f",&SAL);	
	}
	 P3M=Q3M*100/TOTAL;
	 MEDIA=SOMA/TOTAL;
	printf("\n\n Quantidade que recebem um salário mínimo = %d",QM);
	printf("\n Porcentagem que recebem mais do que 3 SAL MIN = %5.1f",P3M);
	printf("\n Media Salarial = %8.2f",MEDIA);
	
}
