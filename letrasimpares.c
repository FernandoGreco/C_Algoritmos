#include<stdio.h>

main(){
	
	int pp,tam;
	char apelido[100];
	
	printf("Digite um nome: ");
	gets(apelido);
	tam=strlen(apelido);
	
	for(pp=1;pp<=tam-1;pp=pp+2)
	
	printf("%c",apelido[pp]);
	
	getch();
}
