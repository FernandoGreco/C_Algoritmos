#include<stdio.h>
#include<string.h>

main(){
	
	char name[10], name2[10];
	
	printf("Digite um nome: ");
	gets(name);
	
	printf("Digite um nome2: ");
	gets(name2);

	
	if(strcmp(name,name2)==0){
		printf("Nomes iguais");
	}
	else {
	printf ("Nomes diferentes");}
	getch();
}
