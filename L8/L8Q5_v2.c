#include<stdio.h>
#include<locale.h>
#include<string.h>
main()
{
	setlocale(LC_ALL,"");
	int Mat,total=0,totalaprov=0,totalrepro=0; 
	float Nota1, Nota2 , Nota3, Media;
	char SIT[15];
	do
	{
		printf("\n Matrícula: "); scanf("%d",&Mat);
		if(Mat==9999)
		  break;
		printf("\n Nota1    : "); scanf("%f",&Nota1);
		printf("\n Nota2    : "); scanf("%f",&Nota2);
		printf("\n Nota3    : "); scanf("%f",&Nota3);
		Media = ((2*Nota1)+(3*Nota2)+(4*Nota3))/9;
		if(Media>=5)
		{
		  strcpy(SIT,"APROVADO");	
		  printf("\n Matrícula= %d - Média Final= %4.1f - %s",Mat,Media,SIT);
		  printf("\n ===============================================");
		  totalaprov++;
	    }
	    else
	    {
	      strcpy(SIT,"REPROVADO");
		  printf("\n Matrícula= %d - Média Final= %4.1f - %s",Mat,Media,SIT);
		  totalrepro++;
	    }
	}
	while(Mat!=9999);
	total = totalaprov + totalrepro;
	printf("\n Total de Aprovados  = %d",totalaprov);
	printf("\n Total de Reprovados = %d",totalrepro);
	printf("\n Total de Alunos     = %d",total);
}
