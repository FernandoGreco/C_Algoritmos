#include <stdio.h>

main()
{
	srand(time(NULL));
	
	int v[20],i,j,aux;
	
	for(i=0;i<20;i++){
	v[i]=rand()%900+200;
	}
	
	for(i=0;i<20;i++)
	for(j=i+1;j<20;j++)
	{
		if(v[i]>v[j]){
		aux=v[j];
		v[j]=v[i];
		v[i]=aux;
				}
	}
	        for(i=0;i<20;i++)
			printf("%d,",v[i]);	

	getch();
}


