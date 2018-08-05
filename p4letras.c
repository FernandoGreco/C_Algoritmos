#include<stdio.h>

main(){
	
	char m[20];
	int x;
	
	printf("Digite o nome: ");
	gets(m);
	
	for(x=20;x>=0;x--)
	printf("%c",m);
	
	getch();
}
