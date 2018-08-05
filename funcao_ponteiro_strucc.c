#include<stdio.h>

struct lista {
	int valor;
	struct lista *proximo;
};

struct lista *busca (struct lista *p,int valor){
	while(p!=NULL){
		if(p->valor==valor){
			return (p);
		} else {
			p=p->proximo;
		}
	}
	return (NULL);
}

int main(){
	struct lista m1,m2,m3;
	struct lista *resultado,*gancho=&m1;
	int valor;
	
	m1.valor=64;
	m2.valor=77;
	m3.valor=157;
	
	m1.proximo=&m2;
	m2.proximo=&m3;
	m3.proximo=NULL;
	
	printf("Digite o valor a ser pesquisado: ");
	scanf("%d",&valor);
	
	resultado=busca(gancho,valor);
	
	if(resultado==NULL){
		printf("valor nao encontrado");
	} else{
		printf("valor %d encontrado",resultado->valor);
	}
	
	getch();
}
