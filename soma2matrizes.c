#include<stdio.h>

main()
{
	int ma[2][2],mb[2][2],soma[2][2],i,j;
	
	for (i=0;i<2;i++)
	for (j=0;j<2;j++)
	{
		printf("matriz1: ");
		scanf("%d",&ma[i][j]);
        soma[i][j]=ma[i][j];
	}
	
	
	
	for (i=0;i<2;i++)
	for (j=0;j<2;j++)
	{
		printf("matriz2: ");
		scanf("%d",&mb[i][j]);
        soma[i][j]=ma[i][j]+mb[i][j];
	}
	
	for (i=0;i<2;i++)
	for (j=0;j<2;j++){
		
	printf("%d\t",soma[i][j]);
	
	}
	
	getch();
	
	
}
