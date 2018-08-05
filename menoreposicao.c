#include<stdio.h>
main()
{
	int v[5],i,maior=0,pos;
	
	for(i=0;i<5;i++)
	{
		printf(": ");
		scanf("%d",&v[i]);
		if(maior<v[i]){
		maior=v[i];
		pos=i;
	}
	} 
	
		printf("maior elemento e:%d na posicao%d",maior,pos);
		
		
	getch();
}
