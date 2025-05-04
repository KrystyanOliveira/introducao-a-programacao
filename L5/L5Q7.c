#include<stdio.h>

main()
{
	int x,n;
	
	printf("\n Informe o número: ");  scanf("%d",&n);
	printf("\n *** TABUADA DO NÚMERO %d ***",n);
	for(x=1;x<=10;x++) 
	   printf("\n %d x %d = %d",n,x,n*x);
}
