#include<stdio.h>

main()
{
	srand(time(NULL));
	int m[200],i,menor,maior;
	for(i=0;i<200;i++){
	m[i]=rand()%300+300;
	}
	
	menor=m[1];
	maior=m[1];
	
	for(i=0;i<200;i++){
	if (menor>m[i])
	menor=m[i];
	if(maior<m[i])
	maior=m[i];
	}
	
	printf("Menor%d e maior%d",menor,maior);
	
	
	getch();
}
