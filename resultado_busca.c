#include<stdio.h>

int busca (int vet[],int min,int max,int n){
	while(min<=max){
		int meio = (min+max)/2;
		if(vet[meio]<n)
		return busca (vet,meio+1,max,n);
		
		else 
		return busca (vet,min,meio-1,n);
		
	}	
}

main(){
	
	int vet[11]={0,1,2,3,4,5,6,7,8,9,10},n,resultado;
	
	printf("Digite valor: ");
	scanf("%d",&n);
	
	resultado=busca(vet,0,11,n);
	
	printf("valor %d encontrado na posicao %d",n,resultado);
	
	
}
