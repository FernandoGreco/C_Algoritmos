#include <stdio.h>

main(){
	
	int ma[3][3],mb[3][3],soma[3][3],i,j;
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("Matriz1: ");
		scanf("%d",&ma[i][j]);
		soma[i][j]=ma[i][j];
	}
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("Matriz2: ");
		scanf("%d",&mb[i][j]);
		soma[i][j]=ma[i][j]+mb[i][j];
	}
	
		for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("%d\t",soma[i][j]);
	}
	
	getch();
}
