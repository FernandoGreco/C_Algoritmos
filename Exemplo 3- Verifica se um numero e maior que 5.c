#include <stdio.h>

// Este programa le um n�mero do teclado e imprime na tela se o mesmo �
// maior ou igual a 5 ou se � menor que 5. Em seguida ele imprime a soma
// dos numeros de 0 at� 10

int main() 
{ // In�cio da fun��o main
  
    // Declara��o das vari�veis a serem utilizadas
	int numero_lido, cont;    // vari�veis tipo inteiro
	
	
	system("CLS"); // este comando permite limpar a tela
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero_lido); // l� um n�mero e armazena seu valor em numero_lido
	printf("\n"); // este comando permite pular uma linha
	
	if (numero_lido >= 5)
        puts("O numero e maior ou igual a 5");//puts permite escrever uma mensagem na tela
        else
        puts ("O numero e menor que 5");
        
    printf("\n"); // este comando permite pular uma linha
    printf("\n"); // este comando permite pular uma linha
    
    // Imprime os n�meros de 0 a 10
	puts ("======= Impress�o dos numeros ate 10 =====");
    printf("\n"); // este comando permite pular uma linha
    cont = 1;
	while( cont <= 10 )
    {
		printf("%d", cont); // imprime um numero
		cont  = cont + 1; // incrementa cont para calcular o proximo numero
	}

	getch();
} // final da fun��o main
