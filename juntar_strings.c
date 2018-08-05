#include<stdio.h>
#include<string.h>

main(){
	
	char name[10], name2[10];
	
	printf("Digite nome: \t");
	gets(name);
	
	printf("Digite sobrenome: ");
	gets(name2);
	


	strcat(name,name2);
	
	
	printf("%s\n",name);
	
	printf("Nome tem %d letras",strlen(name));
	
	getch();
}
