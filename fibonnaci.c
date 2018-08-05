#include<stdio.h>

main(){
	
	int m,x,i=0,j=1,aux;
	
	printf("Digite a quantidade para sequencia fibonnaci: ");
	scanf("%d",&m);
	
	for(x=0;x<m;x++){
		aux=i+j;
		printf("%d,",aux);
		j=i;
		i=aux;
	}
	
	getch();
	
}
