#include<stdio.h>

main(){
	
	srand(time(NULL));
	
	int tam,matriz,i;
	
	printf("Tamanho matriz: ");
	scanf("%d",&tam);
	
	
	for(i=0;i<tam;i++){
		matriz[tam]=rand()%30;
		printf("%d,",matriz[tam]);
		
	}
	getch();
	
}
