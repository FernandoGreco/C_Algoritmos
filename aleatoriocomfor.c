#include<stdio.h>

main(){
	
	int m[7],i;
	
	
	srand(time(NULL));
	for(i=0;i<7;i++){
	m[i]=rand()%3000+1000;
    printf("%d,",m[i]);
}
	
	getch();
}
