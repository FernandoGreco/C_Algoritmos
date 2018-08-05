#include<stdio.h>

main(){
	
	int pp,tam;
	char apelido[100];
	
	printf("Informa um apelido: ");
	gets(apelido);
	tam=strlen(apelido);
	
	printf("\nAs letras na posicao par sao: ");
	
	for(pp=2;pp<=tam;pp=pp+2)

	printf("%c",apelido[pp]);
		
	printf("\n\nNome digitado: %s\t",apelido);
	printf("\n\n");
	
	getch();
	
}
