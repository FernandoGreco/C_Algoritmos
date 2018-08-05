#include<stdio.h>

main(){
	
	FILE *p;
	
	p = fopen("texto.txt","r");
	int x,y,z;
	
	fscanf(p,"%d %d %d",&x,&y,&z);
	
	printf("%d %d %d",x,y,z);
	
	fclose(p);
	
	
	getch();
	
}
