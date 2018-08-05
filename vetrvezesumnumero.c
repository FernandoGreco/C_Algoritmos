#include<stdio.h>

main(){
	
	int v[10],i,mult;
	
	printf("Digite um valor para multiplicar: ");
	scanf("%d",&mult);
	
	for(i=0;i<10;i++){
		printf(": ");
		scanf("%d",&v[i]);
	v[i]=v[i]*mult;
		}
	for(i=0;i<10;i++){
		printf("%d,",v[i]);
	}
	
	getch();
}
