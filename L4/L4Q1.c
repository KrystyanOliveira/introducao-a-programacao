#include<stdio.h>
main()
{
	float h,p;
	char sexo;
	printf("\n Sexo: ");
	scanf("%c",&sexo);
	printf("\n Altura: ");
	scanf("%f",&h);
	if (sexo=='M')
	 p = (72.7*h)-58;
	else if (sexo=='F')
	      p =(62.1*h)-44.7;
		  
	printf("\n Peso ideal= %f",p);	     
}



