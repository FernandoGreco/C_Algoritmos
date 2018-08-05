#include<stdio.h>
main()
{
	int m[3][3],i,j;
	
	srand(time(NULL));
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		m[i][j]=rand()%50;
		printf(":%d ",m[i][j]);
	}
	
	getch();
}
