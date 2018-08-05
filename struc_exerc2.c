#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carro {
	char marca [15];
	int ano;
	float preco;
};

struct carro n[10];

void imprimi(struct carro x){
	printf("\n%f",x.preco);
}

int main (void){

int i;
float p;

//for(i=1;i<=5;i++){
   printf("Preco: ");
   scanf("%f",&n[0].preco);	
   
		
//};
 
  printf("Digite um valor: ");
  scanf("%f",&p);
  
if( p > n[0].preco)
  	imprimi(n[0]);
  	
  	else printf("Nao existe carro com preco menor que este valor");
 
};
