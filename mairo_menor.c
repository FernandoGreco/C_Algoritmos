#include<stdio.h>


void maior_menor (int *maior,int *menor,int vet[]){
	int i;
	*maior=vet[0];
	*menor=vet[0];
	
	for(i=0;i<100;i++){
		if(vet[i]>*maior)
			*maior=vet[i];
		if(vet[i]<*menor)
		*menor=vet[i];
		
	}
}

main(){
	
	srand(time(NULL));
	
	int i;
	int vet[100],maior,menor;
	
	for(i=0;i<100;i++){
		vet[i]=rand()%900;
		printf("%d-",vet[i]);
	}
	maior_menor (&maior,&menor,vet);
	
	printf("\n\nmaior %d e menor %d",maior,menor);
	
	getch();
}
