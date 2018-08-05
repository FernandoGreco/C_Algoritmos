
#include <stdio.h>

// Este programa faz a soma de 3 números inteiros e calcula a média deles

int main() 


{   // Declaração das variáveis a serem utilizadas

	int p1, p2, p3;  // variáveis inteiras
	float media;     // variáveis tipo float (aceita números decimais)
	
	
	system("CLS"); // este comando permite limpar a tela

	printf("Informe o primeiro numero: ");
	scanf("%d", &p1); // lê o primeiro número e armazena seu valor em p1

    printf("Informe o segundo numero: ");
	scanf("%d", &p2); // lê o segundo número e armazena seu valor em p2

    printf("Informe o terceiro numero: ");
	scanf("%d", &p3); // lê o segundo número e armazena seu valor em p3

	media = (p1+p2+p3)/3; // calcula a média dos três números

	printf("Media = %f", media); // imprime a média arredondada na tela
	getch();
}
