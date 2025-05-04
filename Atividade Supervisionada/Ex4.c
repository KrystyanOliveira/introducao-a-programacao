#include<stdio.h>
#include <stdlib.h>
main()
{
	int cont,ret,val,cx,contn;
	char r;
	
	printf("Apenas notas de 10 reais\n");
	cx = 10000;
	contn = 1000;
	
	for(cont=0; cont <= 100; cont++){
	
		printf("Digite o valor a retirar: \n");
		scanf("%d", &val);
		
							
			if (val % 10!= 0)
			printf("\nO Valor digitado nao pode ser retirado ou nao eh multiplo de 10\n");
			else
			cx= cx - val;
			contn= (contn-val/10);
			printf("\nValor restante: %d\n", cx);
			printf("\nNotas de 10 restantes: %d \n", contn);
			ret= cx;
					
			
			if (contn <= 0)
				{ 	printf("Notas Insuficientes restantes \n");
				exit(1);
		}
	}
}
