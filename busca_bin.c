#include<stdio.h>

int busca (int vet[],int in, int fim, int n){
	
	int media=(in+fim)/2;
	while(in<=fim){
		if(media==n)
	return n;
	if(n<=media)
	return busca (vet,in,media-1,n);
	if(n>media)
	return busca (vet,media+1,fim,n);
	}
	return 0;
}



main(){
	
	
	 int vet [5]={1,2,3,4,5};
	 int n,in,fim,res;
	 printf("Digite valor para busca: ");
	 scanf("%d",&n);
	 res=busca(vet,0,5,n);
	 if(res==0)
	 printf("Valor n encontrado");
	 else
	 printf("valor da busca %d encontrado",res);
	 
}
