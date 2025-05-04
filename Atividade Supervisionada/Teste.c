void tabuada(int n){ 
printf("\n\n"); 
printf("TABUADA DO NUMERO %d: \n\n",n); 
int i = 1; 
for(i = 1; i <= 10; ++i){ 
printf("%d X %d = %d\n",n,i,n*i); 
} 
printf("\n\n"); 
} 

int main(){ 
int n = 0; 
printf("ENTRE COM UM NUMERO: "); 
scanf("%d",&n); 

tabuada(n); 

system("PAUSE"); 
char a;
printf("\nDeseja outro calculo: s/n\n");
scanf("% c", &a);
{	
int n = 0; 
printf("ENTRE COM UM NUMERO: "); 
scanf("%d",&n); 

tabuada(n); 
}
	
}
