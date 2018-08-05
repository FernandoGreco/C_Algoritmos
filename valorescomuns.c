#include<stdio.h>

main(){
	
	int m1[10],m2[10],Z[10],cont,comun,z=0;
	
	for(cont=0;cont<10;cont++){
		printf("M1: ");
		scanf("%d",&m1[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		printf("M2: ");
		scanf("%d",&m2[cont]);
	}
	for(cont=0;cont<10;cont++){
		for(comun=0;comun<10;comun++){
			if(m1[cont]==m2[comun]){
				Z[z]=m2[comun];
			    z++;
				break;
			}
			
		}
	}
	
	for(cont=0;cont<z;cont++){
		printf("%d",Z[cont]);
	}
	
	
}
