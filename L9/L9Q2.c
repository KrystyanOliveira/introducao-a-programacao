
#include <stdio.h>
float media (float x, float y, float z)
{
	return (x+y+z)/3;
}
main() 
{
  float N1,N2,N3;  

  printf("\nEntre com a  nota 1:  ");
  scanf("%f", &N1);
  printf("\nEntre com a  nota 2:  ");
  scanf("%f", &N2);
  printf("\nEntre com a  nota 3:  ");
  scanf("%f", &N3);
  printf("A media e' %4.1f \n", media(N1,N2,N3));
  
}

