#include<stdio.h>
#include<string.h>

struct carro {
	char marca[20];
	int ano;
	float preco;
};


struct carro vetor[10];

main(){
	
	vetor[0].ano=1999;
	strcpy(vetor[0].marca,"fiat");
	vetor[0].preco=12.500;
	
	vetor[1].ano=2011;
	strcpy(vetor[1].marca,"volvo");
	vetor[1].preco=72.500;
	
	vetor[2].ano=2009;
	strcpy(vetor[2].marca,"chevrolet");
	vetor[2].preco=19.500;
	
	vetor[3].ano=2014;
	strcpy(vetor[3].marca,"bmw");
	vetor[3].preco=122.500;
	
	vetor[4].ano=1997;
	strcpy(vetor[4].marca,"volkswagem");
	vetor[4].preco=7.500;
	
	vetor[5].ano=1994;
	strcpy(vetor[5].marca,"honda");
	vetor[5].preco=10.500;
	
	vetor[6].ano=1992;
	strcpy(vetor[6].marca,"mazda");
	vetor[6].preco=14.500;
	
	vetor[7].ano=2000;
	strcpy(vetor[7].marca,"mercedes");
	vetor[7].preco=32.500;
	
	vetor[8].ano=1997;
	strcpy(vetor[8].marca,"ferrari");
	vetor[8].preco=999.500,90;
	
	vetor[9].ano=2004;
	strcpy(vetor[9].marca,"maserati");
	vetor[9].preco=182.500;
	
	int i;
	float valor;
	
	for(i=0;i<10;i++){
		printf("%d-",vetor[i].ano);
		printf("%f-",vetor[i].preco);
		printf("%s\n",vetor[i].marca);
	}
	
	printf("Digite valor: ");
	scanf("%f",&valor);
	
	for(i=0;i<10;i++){
		if(valor>=vetor[i].preco){
		printf("%d-",vetor[i].ano);
		printf("%f-",vetor[i].preco);
		printf("%s\n",vetor[i].marca);
		}
	}
	
	
}
