#include<stdio.h>

main(){
	
	
	FILE *arq;
	char c;
	arq=fopen("podepa.txt","r");
	if(arq==NULL){
		printf(" Erro abertura de arquivo");
		system("pause");
		exit(1);
	}
	
	int i;
	for(i=0;i<38;i++){
		c=fgetc(arq);
		printf("%c",c);
		
			}
	fclose(arq);
	
	getch();
}
