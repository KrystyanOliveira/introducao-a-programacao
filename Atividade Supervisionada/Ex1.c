//Pareceu simples, mas deu um trabalho enorme resolver isso aqui. Bati muita cabeça, para entender um principio simples, mas que custou muito tempo.

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
		
		if (n2 > nalta)								// Profª, o jeito mais simples que encontrei para determinar o maior numero foi já atribuindo a variavel de maior nota, uma nota já informada
			nalta= n2;								// pelo usuário. O resto que se segue é apenas comparação entre as variaveis afim de determinar a maior dentre elas.
			if (n3 > nalta)
				nalta= n3;
				
					printf("\nNota Alta: %0.2f", nalta);
		
		nbaixa=n1;								// Essa foi um pouco mais fácil,deu para passar. Resolvi primeiro a questão da maior e foi mais facil passar para a mais baixa nota. 
												//Invertendo a ordem.
		if (n2< nbaixa)							//Vai receber a variavel e comparar com o resto para encontrar a mais baixa.
			nbaixa= n2;
			if (n3< nbaixa)
				nbaixa=n3;
			
					printf("\nNota Baixa: %0.2f", nbaixa);
		
		nalta2 = n1;
		if (nalta2==nbaixa||nalta2==nalta)	//<- A Culpada da Dor de cabeça da noite, só Deus imagina o quanto penei para conseguir encontrar resolver isso aqui. A Charada da questão toda foi essa questão,
			nalta2= n2;								// Que só depois consegui matar ela. Eu tentava descobrir as duas maiores notas, pensando até em usar vetores para compará-las, o que não deu muito certo.
			if (nalta2==nbaixa||nalta2==nalta)		// Tentei de tudo um pouco, e não consegui. Até que fui comer pizza, e enquanto comia,lembrei de psicologia reversa. Foi ai que tentei montar essa linha mas sem,
			nalta2= n3;						// tentar encontrar a segunda mais alta encontrando apenas a mais baixa,pois se fizesse um teste logico de comparação, conseguiria montar a ponto de encontrar a segunda mais alta;
			malta= (nalta+nalta2)/2;		// A sentença remete a operadores lógicos, usando apenas o ou, tentei usar o "E" e não deu certo, comparei a segunda nota alta, com a mais alta e a mais baixa, caso 	
					printf("\nNota Alta 2: %0.2f", nalta2);		// a variavel que estivesse contida nela,fosse igual a setença.Ela seria verdadeira,e ela iria receber uma proxima variavel,até encontrar uma variavel que não atendesse a logica da sentença;
					printf("\nMedia das Notas Altas: %0.2f", malta);	//Finalmente a montei na sequencia ai mostrada, que se ela fosse igual a mais baixa ou igual a mais alta, que ela deveria pegar outra variavel.				
										}				
	
		//Sobre a linha da malta,é referente a "Media das Altas",aonde depois de determinar as duas maiores notas, era apenas fazer a operação de soma e divisão,e descobrir seu resultado.

		

