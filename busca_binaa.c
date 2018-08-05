#include<stdio.h>

int busca (int vet[],int min,int max,int n){
	int media;
	media=(min+max)/2;
	if(vet[media]==n)
	return vet[media];
	if(min==max)
	return -1;
	else if (vet[media]<n)
	 busca (vet,media+1,max,n);
	else
	busca (vet,min,media-1,n);
}


main(){
	srand(time(NULL));
	int vet[10]={1,2,3,4,5,6,7,8,9,10};
	int res,i;
	
	
	
	res=busca (vet,0,10,2);
	
	if(res==-1)
	printf("valor nao esta no vetor");
	else
	printf("valor encontrado %d",res);
	
}
