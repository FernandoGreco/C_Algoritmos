#include <stdio.h>

int main (void){
	char s;
	printf ("Sexo?: ");
	scanf ("%c",&s);
	
	switch (s)
	
	{
		case 'm': printf ("Masculino\n"); break;
	    
		case 'f': printf ("Feminino\n"); break;
		
		default: printf ("Invalido\n"); break;	
	}
	
	
	
	
	return 0;
	
	
} 
