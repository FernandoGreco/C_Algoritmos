#include <stdio.h>

int main (void){
	
	int v[10], i;
	
	for (i=0; i<10; i++){
		printf ("%do . numero?", i+1);
		scanf ("%d", &v[i]);
	}
	printf ("\nOrdem inversa: ");
	
	for (i=9; i>=0; i--)
	 printf ("%d,",v[i]);
	 
	 return (0);
	
}
