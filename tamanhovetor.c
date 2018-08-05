#include<stdio.h>
#include<string.h>

main(){
	
	char name[10], name2[10];
	
	printf("Digite um nome: ");
	gets(name);
	


	strcpy(name2,name);	
	
	
	printf("%s",name2);
	
	printf("Nome tem %d letras",strlen(name2));
	
	getch();
}
