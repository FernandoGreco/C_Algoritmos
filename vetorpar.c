#include<stdio.h>

main()
{
	int v[50],i;
	for(i=10;i<110;i++)
	if(i%2!=0){
	v[i]=i;
	printf("%d,",v[i]);
	}

	getch();
}
