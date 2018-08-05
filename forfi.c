#include<stdio.h>

main(){
	
	int m[10],i,num=0;
	
	for(i=0;i<10;i++){
		printf(": ");
		scanf("%d",&m[i]);
		if(m[i]%2==0){
			num=m[i];
			m[i]=m[i-1];
			m[i-1]=num;
			
		}
		
	}
	for(i=0;i<10;i++)
	
	printf("%d,",m[i]);
	
	getch();
	
	
}
