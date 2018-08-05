#include<stdio.h>

main(){
	
	int v[5],i,j,aux;
	
	for(i=0;i<5;i++)
	{printf(":");
	scanf("%d",&v[i]);
	}
	
	for(i=0;i<5;i++)
	for(j=i+1;j<5;j++)
	{
		if(v[i]>v[j])
		
		{
			aux=v[i];
			v[i]=v[j];
			v[j]=aux;
		}
	}
	
	for(i=0;i<5;i++){
		
		printf("%d",v[i]);
	}
	
	getch();
}
