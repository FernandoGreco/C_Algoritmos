#include <stdio.h>

// Este programa faz a soma de 3 n�meros reais e calcula a m�dia deles

int main() 
{   // Declara��o das vari�veis a serem utilizadas
	
	float p1, media;     // vari�veis tipo reais
	
	
	system("CLS"); // este comando permite limpar a tela

	printf("Informe o valor do raio: ");
	scanf("%f", &p1); // l� o primeiro n�mero e armazena seu valor em p1
        
     
	media = ((3.14*2)*p1) *2;// calcula a m�dia dos tr�s n�meros
	printf("\n"); // este comando permite pular uma linha
	printf("Area da circunfencia = %0.1f", media); // imprime a m�dia tela
	getch();
}
