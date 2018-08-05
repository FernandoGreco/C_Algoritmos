#include<stdio.h>

main(){
	
	int pp,tam;
	char contr[50];
	
	printf("Digite palavra: ");
	gets(contr);
	tam=strlen(contr);
	
	for(pp=1;pp<=tam-1;pp=pp+2)
	printf("%c",contr[pp]);	
	
	printf("\n\nPalvra digitada: %c",tam);
	
	getch();
}
