#include<stdio.h>

main(){
	
	char m[30];
	int x;
	
	printf("Digite um nome: ");
	gets(m);
	
	
	for(x=30;x>=0;x--)
	printf("%c",m[x]);
	
	
	getch();
	
}
