#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct lista {
	int cod;
	struct lista *prox;
};

struct lista *primeiro;
struct lista *ultimo;

void lista_vazia (){
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	primeiro=aux;
	ultimo=primeiro;
}

void inserir (struct lista *p,int cod){
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->cod=cod;
	ultimo->prox=aux;
	ultimo=aux;
	aux->prox=NULL;
}

void imprime(){
	struct lista *aux;
	aux= primeiro->prox;
	while(aux!=NULL){
		printf("%d-",aux->cod);
		aux=aux->prox;
	}
}

int main(){
    struct lista n1,n2,n3,n4;	
	lista_vazia();
	inserir(&n1,10);
	inserir(&n2,15);
	inserir(&n3,95);
	inserir(&n4,19);
	imprime();
	
	
}

