#include<stdio.h>

main()
{
	int m1[2][2],m2[2][2],soma=0,soma2=0,i,j,x,y,total;
	
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
	{
			
		printf("matriz1: ");
		scanf("%d",&m1[i][j]);
		soma=soma+m1[i][j];
	}{
	printf("Total matriz 1:%d\n",soma);
	}
	for(x=0;x<2;x++)
		for(y=0;y<2;y++)
	{
			
		printf("matriz2: ");
		scanf("%d",&m2[x][y]);
		soma2=soma2+m2[x][y];
	}
	{
		printf("Total matriz 2:%d\n",soma2);
	}
	
	total= soma+soma2 ;
	
    {
	printf("Matriz 1 + matriz 2: %d",total);
	}
	getch();
}
