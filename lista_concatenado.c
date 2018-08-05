#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista {
	int valor;
	struct lista *prox;
};

int main(){
	struct lista m1,m2,m3;
	struct lista *gancho=&m1;
	
	m1.valor=555;
	m2.valor=435;
	m3.valor=12;
	
	m1.prox=&m2;
	m2.prox=&m3;
	m3.prox=NULL;
	
	while(gancho!=NULL){
		printf("%d\n",gancho->valor);
		gancho=gancho->prox;
	}
	
	getch();
	
	
}
