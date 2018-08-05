#include<stdio.h>

struct lista {
	int valor;
	struct lista *proximo;
};

main(){
	struct lista m1,m2,m3;
	struct lista *gancho=&m1;
	
	m1.valor=32;
	m2.valor=44;
	m3.valor=66;
	
	m1.proximo=&m2;
	m2.proximo=&m3;
	m3.proximo=NULL;
	
	while(gancho!=NULL){
		printf("%d\n",gancho->valor);
		gancho=gancho->proximo;
	}
	getch();
	
}
