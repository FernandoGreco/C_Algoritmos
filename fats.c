#include<stdio.h>

main(){
	
	int n,fat;
	
	printf("Fatorial: ");
	scanf("%d",&n);
	
	for(fat=1;n>1;n=n-1){
		
		fat=fat*n;
		
			}
	printf("%d",fat);
	
	getch();
}
