#include<stdio.h>
#define m 30

main(){
	
	
	srand(time(NULL));
	int j,x[m];
	
	for(j=0;j<m;j++){
		x[m]=rand()&90;
		printf("%d,",x[m]);
		
	}
	
	getch();
	
}
