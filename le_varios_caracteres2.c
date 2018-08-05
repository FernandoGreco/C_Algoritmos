#include<stdio.h>

main(){
	
	FILE *p;
	char c;

	p=fopen("texto2.txt","r");
	
	if(p==NULL){
		printf("Nao foi possivel abrir arquivo");
		system("pause");
		exit(1);
	}
		int i;
	for(i=0;i<8;i++){
		c=fgetc(p);
		printf("%c",c);
	}
	
	fclose(p);
	getch();
	
}
