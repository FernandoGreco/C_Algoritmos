#include<stdio.h>

struct lista {
	int valor;
	struct lista *prox;
};

struct lista *busca (struct lista *p, int valor){
	while(p!=NULL){
		if(p->valor==valor){
			return (p);
		}
		else
		p=p->prox;
	}
	
return NULL;
}

int main(){
	struct lista m1,m2,m3;
	struct lista *resultado,*gancho=&m1;
	int valor;
	m1.valor=157;
	m2.valor=300;
	m3.valor=65;
	
	m1.prox=&m2;
	m2.prox=&m3;
	m3.prox=NULL;
	
	while(gancho!=NULL){
		printf("%d - ",gancho->valor);
		gancho=gancho->prox;
	}
	
	gancho=&m1;
	
	printf("\nDigite um valor para pesquisa: ");
	scanf("%d",&valor);
	
	resultado=busca(gancho,valor);
	
	if(resultado!=NULL)
	printf("\n%d",resultado->valor);
	else printf("Valor nao encontrado");
	getch();
	
}
