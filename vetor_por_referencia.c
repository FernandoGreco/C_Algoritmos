#include<stdio.h>
#include<stdlib.h>


void maior_menor (int vet[30],int *maior, int *menor){
	int i;
//pega a valor da primeira posição do vetor (vet[0])
	*maior=vet[0];
	*menor=vet[0];
//percorre as 30 posições do vetor vet[i]
//armazena o maior valor na *maior e o menor na *menor	
    for(i=1;i<30;i++){
   	if(*maior<vet[i]){
    	*maior=vet[i];	}
    	if (*menor>vet[i]){
    		*menor=vet[i];
			}
}
	};



main(){
 srand(time(NULL));
 int i,vet[30];
 int maior,menor;
 
 //preenche um vetor com 100 numeros de 0 a 100	
 	for(i=0;i<30;i++){
 	   vet[i]=rand()%100;
		printf("%d-",vet[i]);		
 	 }
 	 
 //chama a função maior_menor e passa o endereço das variaveis abaixo
 	 maior_menor(&vet[0],&maior,&menor);	
 
 //imprimi o conteudo da variavel maior e menor que foi alterado por referencia na função maior_menor	 	
 	 	printf("\nmaior:%d",maior);
 	 	printf("\nmenor:%d",menor);


	getch();
}

