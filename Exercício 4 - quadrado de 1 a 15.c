#include <stdio.h>

// Este programa imprime numeros de 0 até 10 utilizando o comando for

int main() 
{ // Início da função main
  
   	int numero; //contador
   	int quadrado;
	
	numero = 1; //iniciando a variável
	
	while (quadrado <= 15*15) 
	{
		printf("%i \n", quadrado);
		numero = numero + 1;
        quadrado = numero * numero;

    }
    getch (0);
}
