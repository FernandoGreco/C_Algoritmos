
#include <stdio.h>

// Este programa faz a soma de 3 n�meros inteiros e calcula a m�dia deles

int main() 


{   // Declara��o das vari�veis a serem utilizadas

	int p1, p2, p3;  // vari�veis inteiras
	float media;     // vari�veis tipo float (aceita n�meros decimais)
	
	
	system("CLS"); // este comando permite limpar a tela

	printf("Informe o primeiro numero: ");
	scanf("%d", &p1); // l� o primeiro n�mero e armazena seu valor em p1

    printf("Informe o segundo numero: ");
	scanf("%d", &p2); // l� o segundo n�mero e armazena seu valor em p2

    printf("Informe o terceiro numero: ");
	scanf("%d", &p3); // l� o segundo n�mero e armazena seu valor em p3

	media = (p1+p2+p3)/3; // calcula a m�dia dos tr�s n�meros

	printf("Media = %f", media); // imprime a m�dia arredondada na tela
	getch();
}
