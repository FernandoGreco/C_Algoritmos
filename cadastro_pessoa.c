#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pessoa {
	char nome [50];
	char telefone [20];
	char email [50];
};

struct lista {
	struct pessoa pessoa;
	struct lista *prox;
};

void ler_pessoa (struct pessoa *p,char nome[50],char telefone[20],char email[50]){
	printf("\nnome: %s",nome);
	strcpy(p->nome,nome);
	printf("\ntelefone: %s",telefone);
    strcpy(p->telefone,telefone);
	printf("\nemail: %s",email);
 	strcpy(p->email,email);
}

void inserir(struct lista **p, struct pessoa pessoa) {
	struct lista *aux;
	aux=(struct lista*)malloc (sizeof(struct lista));
	aux->pessoa = pessoa;
	aux->prox = *p;
	*p = aux;
}


int main(){
	
	struct pessoa p1,p2;
	struct lista *p=NULL;
	
	ler_pessoa (&p1,"fernando","3243-2343","alterado");
	inserir (&p,p1);
	
	ler_pessoa (&p2,"trevoso","6666-2343","muleke_brabo");	
	inserir(&p,p2);
	
	
}



