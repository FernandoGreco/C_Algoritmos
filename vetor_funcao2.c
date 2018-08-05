#include <stdio.h>
#include <stdlib.h>


void maior_menor(int vet[30],int *maior,int *menor){
	*maior=vet[0];
	*menor=vet[0];
	int i;
	for(i=0;i<30;i++){
		if(vet[i]>*maior)
		*maior=vet[i];
		if(vet[i]<*menor)
		*menor=vet[i];
	}
	
}


main(){
	srand(time(NULL));
	int i, maior, menor;
	
	int vet[30];
	
	for(i=0;i<30;i++){
	vet[i]=rand()%100;
	printf("%d-",vet[i]);	
	}
	
	maior_menor(&vet[0],&maior,&menor);
	
	printf("\nmaior: %d",maior);
	printf("\nmenor: %d",menor);
	getch();
	
	
}
