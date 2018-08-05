#include<stdio.h>

int busca (int vet[],int min,int max,int n){
	int media;
	while(min<max){
		media=(min+max)/2;
		if(vet[media]==n)
		return n;
		else if(vet[media]<n)
		return busca (vet,media+1,max,n);
		else
		return busca (vet,min,media-1,n);
		
	}
	return -1;
}

int sequencial(int vet[],int n){
	int i;
	for(i=0;i<10;i++){
		if(vet[i]==n){
			return n;
		
		}
		
	}
 	return -1;
}



int main (){
	
	int vet[]={0,1,2,3,4,5,6,7,8,9},n,s,res,res_seq;

//	printf("Digite valor para busca binaria: ");
//	scanf("%d",&n);
	
	printf("\nDigite valor para busca sequencial: ");
	scanf("%d",&s);
	
//	res=busca(vet,0,9,n);
	res_seq=sequencial(vet,s);
//	if(res==-1)
//	printf("\nbusca binaria valor n esta na lista");
//	else
//	printf("busca binaria %d",res);
	
	
	
	printf("\nbusca sequencial %d",res_seq);
	
}
