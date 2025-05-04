#include<stdio.h>
#include<string.h>
main()
{
	char sexo[15],co[10],cc[10],teste[15];
	int idade,maior=0,q1=0,q2=0;
	printf("\n Idade: "); scanf("%d",&idade);
	while(idade!=-1)
	{
	 printf("\n Sexo (masculino e feminino): "); scanf("%s",&sexo);
	 printf("\n Cor dos olhos (azuis, verdes ou castanhos): "); scanf("%s",&co);
     printf("\n cor dos cabelos (louros, castanhos, pretos): ");scanf("%s",&cc);
		if(idade>maior)
		  maior=idade;
	
	 if((strcmp(sexo,"feminino") == 0) && (idade>=18) && (idade<=35))
	   q1++;	
	
	 if ((strcmp(co,"verdes") == 0) && (strcmp(cc,"louros") == 0))	
	   q2++;
	   
	printf("\n Idade: "); scanf("%d",&idade);	
	}
	printf("\n Maior idade = %d",maior);
	printf("\n Quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos: %d",q1);
	printf("\n Quantidade de indivíduos que tenham olhos verdes e cabelos louros            : %d",q2);
}


