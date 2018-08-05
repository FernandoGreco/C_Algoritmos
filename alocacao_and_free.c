#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa{
	char nome[30];
	char endereco[100];
	char telefone[20];
};

main(){
	struct pessoa *p = (struct pessoa*)malloc(sizeof(struct pessoa));
	
	strcpy(p->endereco,"ruajoseantonioaugusto8a") ;
	strcpy(p->nome,"fernando greco");
	strcpy(p->telefone,"3423-5354");
	
	printf("%s",p->endereco);
	printf("\n%d",&p);
	
 	free(p);
	
	printf("\n%d",&p);
	
	
}
