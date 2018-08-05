#include<stdio.h>
#include<stdlib.h>

struct lista {
	int valor;
	//proximo é o ponteiro da struct lista
	struct lista *proximo;
};

int main(){
	
	struct lista m1,m2,m3;
	struct lista *gancho = &m1;
	
	m1.valor=10;
	m2.valor=20;
	m3.valor=30;
	
	m1.proximo=&m2;
	m2.proximo=&m3;
	//proximo aponta para nulo
	m3.proximo=NULL;
	
	while(gancho!=NULL){
		printf("%d\n",gancho->valor);
		//o gancho pega o endereço de memoria que esta no ponteiro proximo da struct lista m1, que é m2
		gancho=gancho->proximo;
	}
	
	
	getch();
}
