#include <stdio.h>

int main ()

{
	int ec;
	
	printf ("Digite numero: ");
	scanf ("%d",&ec);
	
	switch (ec){
	
	 case 1: printf ("saldo"); break;
	
	 case 2: printf ("extrato"); break; 
	 
	 case 3: printf ("saque"); break;
	 
	 case 4: printf ("sair"); break;
	 
	 default:  printf ("Invalido"); break;
	}

	getch ();
}
