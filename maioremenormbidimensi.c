#include<stdio.h>

main()
{
	int m[3][3],i,j,maior,menor,pos1,pos2;
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf(": ");
		scanf("%d", &m[i][j]);
	}
	maior=m[1][1];
	menor=m[1][1];
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		if(m[i][j]>maior)
		maior=m[i][j];
		if(m[i][j]<menor)
		menor=m[i][j];
	}
	
	printf("Maior valor:%d e menor valor:%d",maior,menor);
	
	
	getch();
}
