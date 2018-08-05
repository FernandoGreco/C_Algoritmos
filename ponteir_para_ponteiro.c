#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int y=10;
	int *p=&y;
	
	printf("%d",*p);
	
	int **p2=&p;
	
	printf("\n%d",**p2);
	
	getch();
	
}
