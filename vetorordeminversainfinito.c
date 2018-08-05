#include <stdio.h>

int main (void){
	
	int n, i;
	
	printf ("Tamnho da sequencia? ");
	scanf ("%d", &n);
	
	int v [n];
	
	for (i=0; i<n; i++){
		printf ("%do . numero?", i+1);
		scanf ("%d", &v[i]);
	}
	printf ("\nOrdem inversa: ");
	
	for (i=n-1; i>=0; i--)
	 printf ("%d,",v[i]*5);
	 
	 return (0);
	
}
