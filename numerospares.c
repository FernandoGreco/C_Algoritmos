#include<stdio.h>

main()
{
	int m[10],i,cont=0;
	
	srand(time(NULL));
	for(i=0;i<10;i++){
		m[i]=rand()%10;
		if(m[i]%2!=0)
			printf("%d,",m[i]);
	   
	}
	getch();
}
