#include<stdio.h>

main()
{
	int x,n;
	
	printf("\n Informe o n�mero: ");  scanf("%d",&n);
	printf("\n *** TABUADA DO N�MERO %d ***",n);
	for(x=1;x<=10;x++) 
	   printf("\n %d x %d = %d",n,x,n*x);
}
