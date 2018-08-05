#include <stdio.h>

int main() 
{ 
   	int n;    		
	printf ("Pedacos de bolo (preco Unitario):	");
	
	while (n != 7) 
	{
		n = n*n+5;
        printf("%d \n",n);
        printf("Digite um numero:");
	    scanf ("%d",&n);
    }
    return (0);
}

