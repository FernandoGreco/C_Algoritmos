#include <stdio.h>

// Este programa faz a soma de 3 números reais e calcula a média deles

int main() 
{   // Declaração das variáveis a serem utilizadas
	
	float p1, media;     // variáveis tipo reais
	
	
	system("CLS"); // este comando permite limpar a tela

	printf("Informe o valor do raio: ");
	scanf("%f", &p1); // lê o primeiro número e armazena seu valor em p1
        
     
	media = ((3.14*2)*p1) *2;// calcula a média dos três números
	printf("\n"); // este comando permite pular uma linha
	printf("Area da circunfencia = %0.1f", media); // imprime a média tela
	getch();
}
