#include<stdio.h>

main()
{
	int m[5],i,menor=0,pos;
	
	for(i=0;i<5;i++){
	printf(": ");
	scanf("%d",&m[i]);
	if(menor<m[i]){
	menor=m[i];	
	pos=i;
		}
	}

	
	
	
	printf("Maior:%d na posicao:%d",menor,pos);
	
	getch();
	
}
