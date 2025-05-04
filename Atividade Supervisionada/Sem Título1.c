#include <stdio.h>

main()
{
	float media,mnalta,nalta1,nalta2, n1,n2,n3,nalta,nbaixa;
		
		printf("\nDigite a nota: \n");
		scanf("%f", &n1);
		printf("\nDigite a nota: \n");
		scanf("%f", &n2);
		printf("\nDigite a nota: \n");
		scanf("%f", &n3);
		
		media= (n1+n2+n3)/3;
		while (nalta1)
		{ if (n2>n1)
				{
				nalta1= n2;
					} else if (n3>n2);
						{
							nalta1= n3;
							}{
								nalta1=n1;
							}
						}
		while(nalta2)
		{ if (n2 > n1)
				{
				nalta2= n2;
					} else if (n3 > n2);
						{
							nalta2= n3;
							}{
								nalta1=n1;
							}
							
							mnalta=(nalta1+nalta2)/2;
		}
		nalta= n1;
			if (n2 > n1);
			{	nalta= n2;
			}if  (n3 > n2);
				{	nalta= n3;
					}
		{
			nbaixa=n1;
				
				if (n2<=n1)
					{
						nbaixa=n2;
						}
						else if (n3<=n2);
							{
								nbaixa = n3;
								}
							}
		
		printf("\nNota Alta: %0.2f", nalta);
		printf("\nNota Baixa: %0.2f", nbaixa);
		printf("\nMedia das Notas: %0.2f", media);
		printf("\nMedia das Notas Altas: %0.2f", mnalta);
}
