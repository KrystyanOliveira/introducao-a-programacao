#include <stdio.h>
//#include <locale.h>
main ( )
{
//	setlocale(LC_ALL,"");
	float PPORCA,PARRUELA,PPARAFUSO,DPORCA,DARRUELA,DPARAFUSO,VALOR_PAGAR,TOTAL_DESCONTO,VPORCA,VARRUELA,VPARAFUSO;
	int x,QPORCA,QARRUELA,QPARAFUSO;
	char NOME[15];
   	
   	printf("\n ======= TABELA DE PREÇOS ======= ");
   	printf("\n Preço Porcas     : ");  scanf("%f",&PPORCA);
   	printf("\n Preço Arruelas   : ");  scanf("%f",&PARRUELA);
	printf("\n Preço Parafusos  : ");  scanf("%f",&PPARAFUSO); 
	
	for(x=1;x<=3;x++) //alterado de 5 para 3 para agilizar os testes
	{ 
	  printf("\n ======= CLIENTE %d ======= ",x);
	  printf("\n Nome  do cliente     : ");  scanf("%s",&NOME);
	  printf("\n Quantidade Porcas    : ");  scanf("%d",&QPORCA);
	  printf("\n Quantidade Arruelas  : ");  scanf("%d",&QARRUELA);
	  printf("\n Quantidade Parafusos : ");  scanf("%d",&QPARAFUSO);
	  
	  VPORCA=QPORCA*PPORCA;
	  VARRUELA=QARRUELA*PARRUELA;
	  VPARAFUSO=QPARAFUSO*PPARAFUSO;
	  
	  DPORCA=VPORCA*10/100;
	  DARRUELA=VARRUELA*30/100;
	  DPARAFUSO=VPARAFUSO*20/100;
	  
	  TOTAL_DESCONTO = DPORCA + DARRUELA + DPARAFUSO;
	  VALOR_PAGAR = (VPORCA+VARRUELA+VPARAFUSO)-TOTAL_DESCONTO;
	  
	  printf("\n ======= RELATÓRIO DE SAÍDA ======= ");
	  printf("\n Nome  do cliente     : %s",NOME);
	  printf("\n Quantidade Porcas    : %d",QPORCA);
	  printf("\n Quantidade Arruelas  : %d",QARRUELA);
	  printf("\n Quantidade Parafusos : %d",QPARAFUSO);
      printf("\n Total de Descontos   : %8.2f",TOTAL_DESCONTO);	  
      printf("\n Total a  Pagar       : %8.2f",VALOR_PAGAR);	  
  }
}
