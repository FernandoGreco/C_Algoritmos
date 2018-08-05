#include<stdio.h>
main()

{
	char nome[30];
	int b;
	
	printf("Informe um nome: ");
	gets(nome);
	for(b=0;b<=3;b++)
	printf("%c",nome[b]);
		printf("\n\n");
		
	getch();
	
	
}
