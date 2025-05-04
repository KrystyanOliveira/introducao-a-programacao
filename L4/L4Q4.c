#include <stdio.h>
#include <string.h>
main ( )
{
	float SAL,NSAL,AUMENTO;
	char CARGO[10];
    
	printf("\n Salario : ");
	scanf("%f",&SAL);
	printf("\n Cargo   : ");
	scanf("%s",CARGO);
	printf("\n Cargo informado= %s",CARGO);
	if (!strcmpi(CARGO,"GERENTE"))
	  AUMENTO = SAL*25/100;
	else if (!strcmpi(CARGO,"ENGENHEIRO"))
	        AUMENTO = SAL*20/100;
		 else if (!strcmpi(CARGO,"TECNICO"))
	            AUMENTO = SAL*15/100;
			   else
			    AUMENTO = SAL*10/100;
	NSAL = SAL+AUMENTO;		    
	printf("\n Salario      :  %8.2f", SAL);
    printf("\n Novo Salario :  %8.2f", NSAL);						   
    printf("\n Aumento      :  %8.2f", AUMENTO);
}
