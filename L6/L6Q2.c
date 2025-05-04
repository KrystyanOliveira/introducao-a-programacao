#include<stdio.h>
main()
{
	int N,I1=0,I2=0,I3=0,I4=0;
	printf("\n Entre com o numero: "); scanf("%d",&N);
	while(N>=0)
    {
    	if(N<=25)
    	  I1++;
    	else
		  if(N<=50)
		    I2++;
	      else
		    if(N<=75)
			  I3++;
			else
			  if(N<=100)
			    I4++;  		  
    printf("\n Entre com o numero: "); scanf("%d",&N);	 
    }	
    printf("\n [0..25  ]: %d",I1);
    printf("\n [26..50 ]: %d",I2);
    printf("\n [51..75 ]: %d",I3);
    printf("\n [76..100]: %d",I4);
    
}
