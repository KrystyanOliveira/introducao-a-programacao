//Pareceu simples, mas deu um trabalho enorme resolver isso aqui. Bati muita cabe�a, para entender um principio simples, mas que custou muito tempo.

#include <stdio.h>

main()
{
	float media,n1,n2,n3;
	float malta,nalta,nalta2,nbaixa;
		
		printf("\nDigite a nota: \n");
		scanf("%f", &n1);
		printf("\nDigite a nota: \n");
		scanf("%f", &n2);
		printf("\nDigite a nota: \n");
		scanf("%f", &n3);
		
		media= (n1+n2+n3)/3;								//Linha importante para resolver a media das notas normais. Somando as 3 Notas, e retirando a media entre notas.
		printf("\nMedia das Notas: %0.2f", media);
		
		
		nalta=n1;
		
		if (n2 > nalta)								// Prof�, o jeito mais simples que encontrei para determinar o maior numero foi j� atribuindo a variavel de maior nota, uma nota j� informada
			nalta= n2;								// pelo usu�rio. O resto que se segue � apenas compara��o entre as variaveis afim de determinar a maior dentre elas.
			if (n3 > nalta)
				nalta= n3;
				
					printf("\nNota Alta: %0.2f", nalta);
		
		nbaixa=n1;								// Essa foi um pouco mais f�cil,deu para passar. Resolvi primeiro a quest�o da maior e foi mais facil passar para a mais baixa nota. 
												//Invertendo a ordem.
		if (n2< nbaixa)							//Vai receber a variavel e comparar com o resto para encontrar a mais baixa.
			nbaixa= n2;
			if (n3< nbaixa)
				nbaixa=n3;
			
					printf("\nNota Baixa: %0.2f", nbaixa);
		
		nalta2 = n1;
		if (nalta2==nbaixa||nalta2==nalta)	//<- A Culpada da Dor de cabe�a da noite, s� Deus imagina o quanto penei para conseguir encontrar resolver isso aqui. A Charada da quest�o toda foi essa quest�o,
			nalta2= n2;								// Que s� depois consegui matar ela. Eu tentava descobrir as duas maiores notas, pensando at� em usar vetores para compar�-las, o que n�o deu muito certo.
			if (nalta2==nbaixa||nalta2==nalta)		// Tentei de tudo um pouco, e n�o consegui. At� que fui comer pizza, e enquanto comia,lembrei de psicologia reversa. Foi ai que tentei montar essa linha mas sem,
			nalta2= n3;						// tentar encontrar a segunda mais alta encontrando apenas a mais baixa,pois se fizesse um teste logico de compara��o, conseguiria montar a ponto de encontrar a segunda mais alta;
			malta= (nalta+nalta2)/2;		// A senten�a remete a operadores l�gicos, usando apenas o ou, tentei usar o "E" e n�o deu certo, comparei a segunda nota alta, com a mais alta e a mais baixa, caso 	
					printf("\nNota Alta 2: %0.2f", nalta2);		// a variavel que estivesse contida nela,fosse igual a seten�a.Ela seria verdadeira,e ela iria receber uma proxima variavel,at� encontrar uma variavel que n�o atendesse a logica da senten�a;
					printf("\nMedia das Notas Altas: %0.2f", malta);	//Finalmente a montei na sequencia ai mostrada, que se ela fosse igual a mais baixa ou igual a mais alta, que ela deveria pegar outra variavel.				
										}				
	
		//Sobre a linha da malta,� referente a "Media das Altas",aonde depois de determinar as duas maiores notas, era apenas fazer a opera��o de soma e divis�o,e descobrir seu resultado.

		

