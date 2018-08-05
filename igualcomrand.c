#include<stdio.h>

main(){
	
	srand(time(NULL));
	
	int m1[10],m2[10],X[10],cont,igual,x=0;
	
	printf("\tMatriz 1\n\n");
	
	for(cont=0;cont<10;cont++){
		m1[cont]=rand()%10;
		printf("%d,",m1[cont]);
	}
	
	printf("\n\n\tMatriz 2\n\n");
	
	for(cont=0;cont<10;cont++){
		m2[cont]=rand()%10;
		printf("%d,",m2[cont]);
	}
	
	printf("\n\n\tValores comuns na matriz 1 e 2\n\n");
	
	for(cont=0;cont<10;cont++){
		for(igual=0;igual<10;igual++){
			if(m1[igual]==m2[cont]){
			X[x]=m1[igual];
			x++;
			break;
			}
	
		}
	}
	
	for(cont=0;cont<x;cont++){
       printf("%d,",X[cont]);		
	}
	
	getch();
}
