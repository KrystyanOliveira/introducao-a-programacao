#include <stdio.h>
#include <stdlib.h>

float media(float n1,float n2,float n3)
{
	
	
	return (n1+n2+n3)/3;
}

float malta(float ntalta1, float ntalta2)
{
	
	
	return (ntalta1+ntalta2)/2;
}

main()
	{ 
			float n1,n2,n3;
			float ntalta1,ntalta2;
			
				printf("\nDigite a nota: \n");
				scanf("%f", &n1);
				printf("\nDigite a nota: \n");
				scanf("%f", &n2);
				printf("\nDigite a nota: \n");
				scanf("%f", &n3);
				
			

							
				printf("\nMedia das Notas: %0.2f", media());

}
