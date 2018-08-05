#include<stdio.h>

main(){
	
	int m[5][5],i,j,menor=0;
	
	srand(time(NULL));
	for(i=0;i<5;i++)
	for(j=0;j<5;j++){
		m[i][j]=rand()%100+100;
		printf("%d,",m[i][j]);
		if(m[i][j]<menor)
		menor=m[i][j];
	}
	printf("Menor%d",menor);
	
	getch();
	
}
