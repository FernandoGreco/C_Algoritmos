#include <stdio.h>

// Este programa imprime numeros de 0 at� 10 utilizando o comando for

int main() 
{ // In�cio da fun��o main
  
   	int numero; //contador
   	int quadrado;
	
	numero = 1; //iniciando a vari�vel
	
	while (quadrado <= 15*15) 
	{
		printf("%i \n", quadrado);
		numero = numero + 1;
        quadrado = numero * numero;

    }
    getch (0);
}
