#include <stdio.h>

// Este programa faz a soma de 3 n�meros reais e calcula a m�dia deles

int main() 
{   // Declara��o das vari�veis a serem utilizadas
	
	float p1,p2, p3, media;     // vari�veis tipo reais
	
	
	system("CLS"); // este comando permite limpar a tela

	printf("Informe o primeiro numero: ");
	scanf("%f", &p1); // l� o primeiro n�mero e armazena seu valor em p1
        printf("Informe o segundo segundo: ");
	scanf("%f", &p2); // l� o segundo n�mero e armazena seu valor em p2
        printf("Informe o terceiro numero: ");
	scanf("%f", &p3); // l� o segundo n�mero e armazena seu valor em p3
	media = (p1+p2+p3)/3; // calcula a m�dia dos tr�s n�meros
	printf("\n"); // este comando permite pular uma linha
	printf("Media = %f", media); // imprime a m�dia tela
	getch();
}
