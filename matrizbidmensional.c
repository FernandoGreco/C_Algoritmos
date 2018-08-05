#include<stdio.h>

main (){
	
	
	srand(time(NULL));
	int m[2][4][5],i,j,x;
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			for(x=0;x<5;x++){
				m[i][j][x]=rand()%15;
				if(m[i][j][x]%2==0){
						printf("%d,",m[i][j][x]);
				}
			}
		}
	}
	
	getch();
	
	
}
