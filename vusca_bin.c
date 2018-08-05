#include<stdio.h>
#include<stdlib.h>

int busca (int vet[],int min,int max,int n){
	int meio;
	while(min<=max){
	
	meio=(min+max)/2;
	
	if(vet[meio]==n)
	return meio;
	
	else if (meio<n)
	return busca (vet,meio++,max,n);
	
	return busca (vet,min,meio--,n);
	
	}
	
	return -1;
	
}


main(){
	
	int vet[6]={1,2,3,4,5,6},n,resultado;
	
	printf("Digite valor: ");
	scanf("%d",&n);
	
	resultado = busca(vet,0,5,n);
	if(resultado == -1)
	printf("valor n encontrado");
	else
    printf("valor %d na posicao %d",n,resultado);
}
