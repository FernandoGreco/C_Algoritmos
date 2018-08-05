#include <stdio.h>

int main ()

{
	char ec;
	
	printf ("Digite a letra: ");
	scanf ("%c",&ec);
	
	switch (ec){
	
	 case 's': printf ("Solteiro"); break;
	
	 case 'c': printf ("Casado"); break; 
	 
	 case 'd': printf ("Divorciado"); break;
	 
	 case 'v': printf ("Viuvo"); break;
	 
	 default:  printf ("Invalido"); break;
	}

	getch ();
	
}
