#include<stdio.h>

main(){
	
	srand(time(NULL));
	
	int *xi;
	int soma,i,q;
	
	xi=(int*)malloc(q*sizeof(int));
	
	printf("Informe e quantidade de componentes: ");
	scanf("%d",&q);
	
	for(i=0;i<q;i++){
		xi[i]=rand()%70+30;
		printf("%0.2d/",xi[i]);
	}
	
	printf("\n\nFAC\n\n");
	
	
		for(soma=1;q>1;q=q-1){
		soma=soma+xi[i];
		printf("%0.2d/",soma);
	}
	
free(xi);
	
	getch();
	
}
