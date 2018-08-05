#include<stdio.h>

main(){
	
	int v[10],x,trc=0;
	for(x=0;x<10;x++){
		printf(": ");
		scanf("%d",&v[x]);
		if(x%2!=0){
			trc=v[x];
			v[x]=v[x-1];
			v[x-1]=trc;
		}
		
	}
	for(x=0;x<10;x++){
		printf("%d,",v[x]);
	}
	
	getch();
}

