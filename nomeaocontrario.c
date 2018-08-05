#include<stdio.h>


main(){
	
	char nome[30];
	int n;
	
	
	printf("Digite o nome: ");
	gets(nome);
	
	for(n=30;n>=0;n--)
	printf("%c",nome[n]);
	printf("\n\n");
	
	getch();
}
