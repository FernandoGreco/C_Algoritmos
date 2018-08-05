#include<stdio.h>

main(){
	
	int pp,tam,x;
	char apelido[100];
	
	printf("[%c]Informa um apelido: ");
	gets(apelido);
	tam=strlen(apelido);
	
	printf("\nAs letras na posicao impar sao: ");
	
	for(pp=1;pp<=tam;pp=pp+2)

	printf("%c",apelido[pp]);
		
	printf("\n\nNome digitado: %s\t",apelido);
	printf("\n\n");
	
	
	getch();
	
}
