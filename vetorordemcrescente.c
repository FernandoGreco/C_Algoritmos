#include<stdio.h>

main(){
	
	int m[5],i,j,aux;
	
	srand(time(NULL));
	for(i=0;i<5;i++){
		m[i]=rand()%40+50;
	}
	
	for(i=0;i<5;i++)
	for(j=i+1;j<5;j++)
		if(m[i]>m[j]){
			aux=m[i];
			m[i]=m[j];
			m[j]=aux;
		}
			
	for(i=0;i<5;i++)		
		printf("%d,",m[i]);
	
	getch();
}
