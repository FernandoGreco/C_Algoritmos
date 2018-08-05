#include<stdio.h>

main()
{
	int m[10],i,j,aux=0;

for (i=0;i<10;i++)
 {
 	printf(": ");
 	scanf("%d",&m[i]);
 }	
	for(i=0;i<10;i++)
	for(j=i+1;j<10;j++)
	if(m[i]>m[j]){
		aux=m[i];
		m[i]=m[j];
		m[j]=aux;
	}
	for(i=0;i<10;i++){
		printf("%d\n",m[i]);
	}
	getch();
}
