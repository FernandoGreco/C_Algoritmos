#include<stdio.h>

main(){
	
	char nome[30];
	int a;
	
	printf("Digite seu nome:" );
	gets(nome);
	
	for(a=3;a<=5;a++)
	printf("%c",nome[a]);
	printf("\n\n");
	
	getch();
}
