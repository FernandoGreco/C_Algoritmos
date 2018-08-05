#include<stdio.h>
#include<string.h>

int main(){
	
	char a[5],b[5];
	
	gets(a);
	
	strcpy(b,a);
	
	printf("%s",b);
	
	getch();
	
	return 0;
}
