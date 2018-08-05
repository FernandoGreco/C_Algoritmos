#include<stdio.h>

main(){
	
	int i=0,j=1,aux,q,x;
	
	printf("DIgite a quantidade para fibannaci: ");
	scanf("%d",&q);
	
	for(x=0;x<q;x++){
		aux=i+j;
		printf("%d/",aux);
		i=j;
		j=aux;
		
	}
	
	getch();
	
}
