#include<stdio.h>

main(){
	
		
	int m[5],i,j,ord=0;
	for(i=0;i<5;i++){
	printf(": ");
	scanf("%d",&m[i]);
			
		}

    for(i=0;i<5;i++)
    for(j=i+1;j<5;j++)
    	if(m[i]>m[j]){
    	ord=m[i];
    	m[i]=m[j];
    	m[j]=ord;
 	
	}
	for(i=0;i<5;i++){
		printf("%d,",m[i]);
	}
	
	getch();
}
