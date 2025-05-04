#include <stdio.h>

main()
{
	int n,a,quoc=0;
	
	printf("Digite um numero \n");
	scanf("%d", &n);
	
	for (a=1; a<=n; a++)		//Contador para ajudar na hora de descobrir o quociente,pois não existe quociente em c; a variavel n que o usuario informa; e se ela for menor ou igual que o indice,acrescenta+1;
		{
			if (n % a== 0)	//se a variavel dividida pelo o indice restar 0, ela vai acrescentar a variavel quociente,para testar mais um calculo.
			quoc ++;		
		}
		if (quoc==2) {			//O X da questão, se a variavel quociente, ter apenas 2 divisores,então o numero será primo. Usando o igual a 2 do quociente, nosso teste é feito e se der ok,ele é,caso contrário não.
		
		printf("Esse numero eh primo\n");
		
		}else{
		
		printf("Esse numero nao eh primo\n");	
}
	
}
