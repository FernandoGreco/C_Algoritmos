#include<stdio.h>

main(){
	
	int x,m[7],aux=0,j;
	
	for(x=0;x<7;x++)
    {
	printf(": ");
	scanf("%d",&m[x]);
}
     for(x=0;x<7;x++)
     for(j=x+1;j<7;j++)
     if(j>m[x]){
    
     aux=m[x];
     m[x]=j;
     j=aux;          
	 printf("%d,",m[x]); }
	    
	getch();
}
