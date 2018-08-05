#include<stdio.h>
#define n 20

main(){
	
	int va[n],cb[n],i;
	srand(time(NULL));
	
	for(i=0;i<n;i++){
	 va[i]=rand()%50;
	 printf("%d,",va[i]);
	 cb[i]=va[i];
	 printf("%d\n",cb[i]);
	}
	
	getch();
}
