#include<stdio.h>

struct lista{
	int valor;
	struct lista *prox;
};

struct lista *pesquisa (struct lista *p,int valor){
	while(p!=NULL){
		if(p->valor==valor){
			return(p);
		}else p=p->prox;
	}
	return(NULL);
}

int main (){
	
	struct lista m1,m2,m3,m4;
	struct lista *resultado,*gancho=&m1;
	int valor;
	
	m1.valor=13;
	m2.valor=12;
	m3.valor=11;
	m4.valor=134;
	
	m1.prox=&m2;
	m2.prox=&m3;
	m3.prox=&m4;
	m4.prox=NULL;
	
	printf("Digite valor para ser pesquisado: ");
	scanf("%d",&valor);
	
	resultado=pesquisa(gancho,valor);
	
	if(resultado==NULL){
		printf("valor nao encontrado!");
	}else printf("Valor %d encontrado",resultado->valor);
	
	getch();
	
}
