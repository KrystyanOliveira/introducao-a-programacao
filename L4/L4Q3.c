#include <stdio.h>
main ( )
{
	int ID;
    printf("\n Idade: ");
	scanf("%d",&ID);
	if ((ID>=5)&&(ID<=7))
	  printf("\n Infantil A");
	else if ((ID>=8)&&(ID<=10))
	      printf("\n Infantil B");
		else if ((ID>=11)&&(ID<=13))
	          printf("\n Juvenil A");
	         else if ((ID>=14)&&(ID<=17))
	            printf("\n Juvenil B");
	            else if (ID>=18)
	             printf("\n Adulto");
	            else
				   printf("\n Idade nao  atendida por nenhuma categoria");
				   
}
