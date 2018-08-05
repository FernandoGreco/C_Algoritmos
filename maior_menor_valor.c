#include<stdio.h>
#define max 40


void ma_me (int vet[max],int *maior,int *menor){
	*maior=vet[0];
	*menor=vet[0];
	int i;
	for(i=0;i<max;i++){
		if(vet[i]>*maior)
		*maior=vet[i];
		if(vet[i]<*menor)
		*menor=vet[i];
	}
	}
 


main(){
	srand(time(NULL));
	
	int vet[max],i,maior,menor;
	
	for(i=0;i<max;i++){
		vet[i]=rand()%100;
		printf("%d-",vet[i]);
	}
	
	
	ma_me (vet,&maior,&menor);
	
	printf("\nmaior valor: %d - menor valor: %d",maior,menor);
	
}
