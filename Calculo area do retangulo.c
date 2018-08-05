#include <stdio.h>

// Este programa faz a soma de 3 números reais e calcula a média deles

int main() 
{   // Declaração das variáveis a serem utilizadas
	
	float p1,p2, media;     // variáveis tipo reais
	
	
	system("CLS"); // este comando permite limpar a tela

	printf("Informe o valor da altura: ");
	scanf("%f", &p1); // lê o primeiro número e armazena seu valor em p1
        printf("Informe o valor da base: ");
	scanf("%f", &p2); // lê o segundo número e armazena seu valor em p2
     
	media = p1*p2; // calcula a média dos três números
	printf("\n"); // este comando permite pular uma linha
	printf("Area do tringulo = %0.1f", media); // imprime a média tela
	getch();
}
