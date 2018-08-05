#include<stdio.h>

main(){
	
	FILE *p;
	
	p = fopen("texto2.txt","w");
	
	fclose(p);
	
	getch();
	
}
