#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
	float valor;
	char nome [50];
};

struct produto p;

void imprimir (struct produto x){
	printf ("\n%s por %.2f reais",x.nome,x.valor);
};

struct produto inflacionar (){
p.valor*=1.1;
return p;
};

int main (void){
	p.valor=4.0;
	strcpy(p.nome,"meu produto");
	imprimir(p);
	
	struct produto produtoinflacionado=inflacionar();
	imprimir(produtoinflacionado);
	return 0;
};
