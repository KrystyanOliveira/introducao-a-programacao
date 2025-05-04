#include<stdio.h>
main()
{
	int ID,QI=0,QE=0,SI=0,MAIOR,MENOR;

    printf("\n Entre com a idade: "); scanf("%d",&ID);
    MAIOR=ID;
    MENOR=ID;
    
	while(ID!=0)
	{
		if (ID>=65)
		  QI=QI+1;
		if (ID>=16)
		  QE=QE+1;
		if (ID>=18)
		  SI=SI+ID;
		if (ID>MAIOR)
		  MAIOR=ID;
		if (ID<MENOR)
		  MENOR=ID;
		      
		printf("\n Entre com a idade: "); scanf("%d",&ID);	
	}
	printf("\n\n Quantidade de idosos                     = %d",QI);
	printf("\n Quantidade de eleitores                    = %d",QE);
	printf("\n Soma das idades da pessoas aptas a dirigir = %d",SI);
	printf("\n\n Maior idade                              = %d",MAIOR);
	printf("\n\n Menor idade                              = %d",MENOR);
}
