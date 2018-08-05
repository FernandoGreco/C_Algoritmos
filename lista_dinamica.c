#include<stdio.h>
#include<stdlib.h>

struct tipo_lista {
	int cod;
	struct tipo_lista *prox;
};

struct tipo_lista *primeiro;
struct tipo_lista *ultimo;

void FLVazia(){
	struct tipo_lista *aux;
	aux = (struct tipo_lista*) malloc (sizeof(struct tipo_lista));
	primeiro = aux;
	ultimo =primeiro;
}

void insere (int x){
	struct tipo_lista *aux;
	aux = (struct tipo_lista*) malloc (sizeof(struct tipo_lista));
	aux->cod=x;
	//variavel prox. do ponteiro ultimo, recebe endereço de memoria do ultimo item adicionado
	ultimo->prox=aux;
	//ponteiro ultimo recebe endereço de memoria de ultimo item adicionado
	ultimo=ultimo->prox;
	aux->prox=NULL;
}

void imprimi (){
	struct tipo_lista *aux;
	aux=primeiro->prox;
	while(aux!=NULL){
		printf("item = %d\n",aux->cod);
		aux=aux->prox;
	}
}

void pesquisa (int x){
		struct tipo_lista *aux;
		int flag=0;
		aux=primeiro->prox;
		while(aux!=NULL){
			if(aux->cod==x){
				printf("\nachou item %d",x);
				flag=1;
				aux=NULL;
			} else aux=aux->prox;
		}
		//se o flag for diferente de 1 significa que o item não foi encontrado
		if(flag==0
		)
		printf("\nitem %d nao existe nesta lista",x);
}

main(){
	
	char op='2';
	int i,codigo;
	FLVazia();
	while(op!='0'){
		printf("entre com o codigo: ");
		scanf("%d",&codigo);
		insere(codigo);
		printf("cotinuar com o cadastro? 1 =sim 0 = nao\n");
		op=getch();
	}
	imprimi ();
	printf("\n\nentre com item para pesquisar: ");
	scanf("%d",&codigo);
	pesquisa(codigo);
	getch();
}
