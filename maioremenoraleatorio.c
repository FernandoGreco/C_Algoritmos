#include<stdio.h>

main()
{
	int m[5][5],i,j,maior,menor;
		
	srand(time(NULL));
	for(i=0;i<5;i++)
	for(j=0;j<5;j++){
		m[i][j]=rand()%100+50;
		printf("%d,",m[i][j]);
	}
	maior=m[1][1];
	menor=m[1][1];
	
	for(i=0;i<5;i++)
	for(j=0;j<5;j++){
	
	if(m[i][j]>maior)
	maior=m[i][j];
	if(m[i][j]<menor)
	menor=m[i][j];
}

  printf("\n\nMaior valor aleatorio:%d e menor valor aleatorio:%d",maior,menor);
  
}
  
  
  
  
