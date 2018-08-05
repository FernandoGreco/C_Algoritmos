#include<stdio.h>

main()

{
	int v[5],i,maior=0,pos=0;
	
	for(i=0;i<5;i++)
	{
		printf(": ");
		scanf("%d",&v[i]);
	}
	for(i=0;i<5;i++){
		if(maior<v[i]){
		
		maior=v[i];
		pos=i;
	}
	}
	printf("Maior valor:%d\n",maior);
	printf("Esta na posicao:%d",pos);
	
	getch();
} 
