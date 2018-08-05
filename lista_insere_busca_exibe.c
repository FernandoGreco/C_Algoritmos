#include<stdio.h>
#include<stdlib.h>

struct lista{
	int num;
	struct lista *prox;
};

struct lista *primeiro;
struct lista *ultimo;

void lista_vazia(){
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	primeiro=aux;
	ultimo=primeiro;
}

void insere (int n){
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->num=n;
	ultimo->prox=aux;
	ultimo=aux;
	aux=ultimo;
	aux->prox=NULL;	
}

void imprime(){
	struct lista *aux;
	aux=primeiro->prox;
	while(aux!=NULL){
		printf("%d-",aux->num);
		aux=aux->prox;
	}
}

void tamanho(){
		struct lista *aux;
	aux=primeiro;
	int i;
	while(aux!=NULL){
			i++;
	     aux=aux->prox;
	}
	printf("\ntamanho %d",i);
}

main(){

	lista_vazia();
	insere(15);
	insere(12);
	insere(16);
	insere(45);
	insere(18);
	insere(26);
	insere(18);
	insere(26);
	imprime();
	tamanho();
	
}
