#include<stdio.h>

main(){
	
	int m1[10],m2[10],X[10],cont,igual,x=0;
	
	for(cont=0;cont<10;cont++){
		printf("M1: ");
		scanf("%d",&m1[cont]);
	}
	for(cont=0;cont<10;cont++){
		printf("M2 ");
		scanf("%d",&m2[cont]);
	}
	for(cont=0;cont<10;cont++){
		for(igual=0;igual<10;igual++){
			if(m2[igual]==m1[cont]){
				X[x]=m2[igual];
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
