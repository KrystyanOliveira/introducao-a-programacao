#include <stdio.h>
main ( )
{
	int N;
    printf("\n Numero: ");
	scanf("%d",&N);
	    switch (N) {
		case 1:
		     printf (" \n Domingo");
		     break;
		case 2:
		     printf (" \n Segunda-feira");
		     break;
		case 3:
		     printf (" \n Terca-feira");
		     break;     
		case 4:
		     printf (" \n Quarta-feira");
		     break;
		case 5:
		     printf (" \n Quinta-feira");
		     break;
		case 6:
		     printf (" \n Sexta-feira");
		     break;
		case 7:
		     printf (" \n Sabado");
		     break;	 	 	      
		default:
		     printf (" \n Valor invalido");
		    
	     }
	
} 

