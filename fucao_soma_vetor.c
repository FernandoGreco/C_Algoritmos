#include<stdio.h>


int soma (int vet[], int tam){
	int soma;
	const *ultimo=vet+tam;
	int *ponteiro;
	for(ponteiro=vet;ponteiro<ultimo;ponteiro++){
		soma+=*ponteiro;
	}
	return(soma);
	
}

main(){
	
	int vet[10] = {5,5,5,-25,5,5,5,5,5,5};
	
	printf("%d",soma(vet,10));
	getch();
}
