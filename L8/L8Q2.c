#include<stdio.h>
main()
{
   int x,maximo;
   printf("\n Numero: "); scanf("%d",&x);
   maximo=x;
   while(x!=9999)
   {
   	 if (x>maximo)
   	  maximo=x;
   	 printf("\n Numero: "); scanf("%d",&x); 
   }
   printf("\n Maximo= %d",maximo);
}
