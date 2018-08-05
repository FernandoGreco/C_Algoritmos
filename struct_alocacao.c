#include<stdio.h>
#include<stdlib.h>

struct cliente {
	int id;
	char nome[50];
};

main(){
	
	struct cliente *ponteiro;
	
	ponteiro=(struct cliente*) malloc (sizeof(struct cliente));
	
	ponteiro->id=15;
	
	printf("%d",ponteiro->id);
	
	
	free(ponteiro);
	ponteiro=NULL;
	
	printf("\n%x",ponteiro);
	
	getch();
}
