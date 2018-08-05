#include<stdio.h>

main()
{
 int m[4][4],i,j,maior=0;
 
   srand(time(NULL));	
	for(i=0;i<4;i++)
	for(j=0;j<4;j++){
		m[i][j]=rand()%500+100;
		printf("%d,",m[i][j]);
		if(maior<m[i][j])
		maior=m[i][j];}
		printf("Maior valor:%d,",maior);
	getch();
}
