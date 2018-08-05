#include<stdio.h>

main(){
	
	int fat,n;
	
	printf("Digite numero para calculo fatorial: ");
	scanf("%d",&n);
	
	for(fat=1;n>1;n=n-1){
		fat=fat*n;
	}
	printf("%d",fat);
	
	getch();
}


