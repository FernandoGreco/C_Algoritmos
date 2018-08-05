#include <stdio.h>

// Este programa imprime numeros de 0 até 10 utilizando o comando for

int main() 
{ // Início da função main
  
   	int n; //contador
   		
	printf("Digite um numero:");
	scanf ("%d",&n);
	
	while (n != 7) 
	{
		n = n*n+5;
        printf("%d \n",n);
        printf("Digite um numero:");
	    scanf ("%d",&n);
    }
    return (0);
}



