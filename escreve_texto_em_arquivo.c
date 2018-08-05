#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	FILE *arq;
	char string[100];
	int i;
	
	arq=fopen("texto2.txt","w");
	if(arq==NULL){
		printf("Erro na abertura de arquivo");
		system ("pause");
		exit(1);
	}
	printf("Entre com a string a ser gravada no arquivo");
	gets(string);
	
	for(i=0;i<strlen(string);i++)
	fputc(string[i],arq);
	fclose(arq);
	system("pause");
	
	
	getch();
}
