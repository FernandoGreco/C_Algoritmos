#include<stdio.h>

void parametro(int *x){
	
	*x=8;
	printf("detro da funcao:%d",*x);
}


main (){
	
	int n=10;
	
	printf("Digite o valor: ");
	scanf("%d",&n);
	
	parametro(&n);
	
	printf("\nValor na main: %d",n);
	
	
	getch();
}
