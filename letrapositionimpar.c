#include<stdio.h>

main(){
	
	int pp=1,tam,x;
	char apelido [100];
	
	printf("Informe um apelido: ");
	gets(apelido);
	tam=strlen(apelido);
	printf("\nAs letras no posicao impar sao: ",x);
	
	while(pp<=tam-1)
	{
		printf("%c",apelido[pp]);
		pp=pp+2;
	}
	
	printf("\n");
	printf("\n\tNOme digitado:%s\t",apelido);
	printf("\n\n");
	
	getch();
}
