#include <stdio.h>

int main (void){
	int N,L,C;
	
	printf ("Numero?: ");
	scanf ("%d",&N);
	
	for (L=1; L<=N; L++){
	
	for (C=1; C<=N; C++)
	printf ("%c",220);
		printf ("\n");
	}
	
	getch();
}
