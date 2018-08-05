#include<stdio.h>

main(){
	
	FILE *p;
	char string[50];
	int i;
	
	p=fopen("podepa.txt","w");
	
	if(p==NULL){
		printf("Erro ao abrir arquivo");
		system("pause");
		exit(1);
	}
	
	printf("Entre com a string a ser gravada em arquivo: ");
	gets(string);
	
	
	for(i=0;i<strlen(string);i++)
	
		fputc(string[i],p);
		fclose(p);
	
	
	getch();
	
}
