#include<stdio.h>
#include <stdlib.h>
main()
{
	int cont,ret,val,cx;
	char r;
	
	printf("Apenas notas de 10 reais\n");
	cx = 10000;
	
	for(cont=0; cont <= 100; cont++){
	
		printf("Digite o valor a retirar: \n");
		scanf("%d", &val);
							
			if (val % 10!= 0)
			printf("\nO Valor digitado nao pode ser retirado ou nao eh multiplo de 10\n");
			else
			cx= cx - val;
			printf("\nValor restante: %d\n", cx);
			ret= cx;
			
			if (ret<=0)
				{ 	
				exit(1);
		}
	}
}
