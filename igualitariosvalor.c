#include<stdio.h>

main(){
	srand(time(NULL));
	int m1[10],m2[10],X[10],cont,igual,x=0;
	
	for(cont=0;cont<10;cont++){
		printf("m1: ");
		scanf("%d",&m1[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		printf("m2: ");
		scanf("%d",&m2[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		for(igual=0;igual<10;igual++){
			if(m1[igual]==m2[cont]){
				X[x]=m2[cont];
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
