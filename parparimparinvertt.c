#include<stdio.h>

main(){
	
	int m[10],i,aux=0;
	
	for(i=0;i<10;i++){
		printf(": ");
		scanf("%d",&m[i]);
		
		if(m[i]%2==0){
		aux=m[i];
		m[i]=m[i-1];
		m[i-1]=aux;
			}
	}
	
	for(i=0;i<10;i++){
		printf("%d,",m[i]);
		
	}	
	
	getch();
}
