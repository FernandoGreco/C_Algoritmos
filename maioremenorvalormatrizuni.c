#include<stdio.h>

main()
{
	int m[7],i,maior,menor;
	
	for(i=0;i<7;i++){
		printf(": ");
		scanf("%d",&m[i]);
	}
	
	maior=m[1];
	menor=m[1];
	
	for(i=0;i<7;i++){
		if(m[i]>maior)
		maior=m[i];
		if(m[i]<menor)
		menor=m[i];
	}
	printf("Maior:%d e Menor:%d",maior,menor);
	
	getch();
}
