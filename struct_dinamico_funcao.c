#include<stdio.h>
#include<stdlib.h>

struct produto {
 int codigo;
 char nome[50];
 struct produto *prox;
};

void listar(struct produto *p){
	int cont;
	while(p!=NULL){
		printf("%d\n",p->codigo);
		p = p ->prox;
		}
}

int contar(struct produto *p){
	int cont;
	while(p!=NULL){
		p = p ->prox;
		cont++;
		}
		return cont;
	
}

int ultimo(struct produto *p){
	while(p->prox!=NULL){
		p = p ->prox;
}
return p->codigo;	
}


int main(){
	
	struct produto *produto1;
	produto1 = (struct produto*)malloc(sizeof(struct produto));
	produto1->codigo = 121;

	
	struct produto *produto2;
	produto2 = (struct produto*)malloc(sizeof(struct produto));
	produto2->codigo = 237;

	
	//faz a ligação entre as 2 estruturas
	produto1->prox=produto2;
	
	struct produto *produto3;
	produto3 = (struct produto*)malloc(sizeof(struct produto));
	produto3->codigo = 500;

	//faz a ligação entre as 2 estruturas
	produto2->prox=produto3;
	
	struct produto *produto4;
	produto4 = (struct produto*)malloc(sizeof(struct produto));
	produto4->codigo = 600;
	produto4->prox = NULL;
	
	//faz a ligação entre as 2 estruturas
	produto3->prox=produto4;
//	printf("%d",produto1->codigo);
//	printf("\n%d",produto1->prox->codigo);
//	printf("\n%d",produto1->prox->prox->codigo);
	
	
	listar(produto1);
	
	int quantidade=contar(produto1);
	printf("\nquantidade de valores %d",quantidade);
	int resultado=ultimo(produto1);
	printf("\nultimo valor %d",resultado);
}
