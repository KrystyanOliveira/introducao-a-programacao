#include <stdio.h>

float calculaDesconto (float v)
{
	return v*9/100;
}

float calculaNovo(float v, float d)
{
	return v - d;
}
main() 
{
  float VALOR;  

  printf("\nEntre com o valor do produto:  ");
  scanf("%f", &VALOR);
  printf("Desconto            =   %6.2f \n", calculaDesconto(VALOR));
  printf("Valor com  Desconto =   %6.2f", calculaNovo(VALOR,calculaDesconto(VALOR)));
  
}

