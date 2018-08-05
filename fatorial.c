#include<stdio.h>

main()
{
	int n,fat;
	
	printf("Digite o numero para calculo de seu fatorial:");
	scanf("%d",&n);
	
	for(fat=1;n>1;n=n-1){	
	fat=fat*n;
}
   printf("Fatorial:%d ",fat);

 getch();
}
