#include <stdio.h>

// Este programa faz a soma de 3 n�meros reais e calcula a m�dia deles

int main() 
{   // Declara��o das vari�veis a serem utilizadas
	
	float p1,p2, media;     // vari�veis tipo reais
	
	
	system("CLS"); // este comando permite limpar a tela

	printf("Informe o valor da altura: ");
	scanf("%f", &p1); // l� o primeiro n�mero e armazena seu valor em p1
        printf("Informe o valor da base: ");
	scanf("%f", &p2); // l� o segundo n�mero e armazena seu valor em p2
     
	media = p1*p2; // calcula a m�dia dos tr�s n�meros
	printf("\n"); // este comando permite pular uma linha
	printf("Area do tringulo = %0.1f", media); // imprime a m�dia tela
	getch();
}
