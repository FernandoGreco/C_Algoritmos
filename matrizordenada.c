#include<stdio.h>

main(){
	
	srand(time(NULL));
	
	int m[5][5],m2[5][5],i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			m[i][j]=rand()%5;
			printf("%d/",m[i][j]);
		}
	}
	
	
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			m2[i][j]=rand()%5;
			printf("%d,",m2[i][j]);

		}
	}
	
	
	
	
	getch();
	
	
}
