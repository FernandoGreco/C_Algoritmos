#include <stdio.h>

// Este programa le um número do teclado e imprime na tela se o mesmo é
// maior ou igual a 5 ou se é menor que 5. Em seguida ele imprime a soma
// dos numeros de 0 até 10

int main() 
{ // Início da função main
  
    // Declaração das variáveis a serem utilizadas
	int numero_lido, cont;    // variáveis tipo inteiro
	
	
	system("CLS"); // este comando permite limpar a tela
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero_lido); // lê um número e armazena seu valor em numero_lido
	printf("\n"); // este comando permite pular uma linha
	
	if (numero_lido >= 5)
        puts("O numero e maior ou igual a 5");//puts permite escrever uma mensagem na tela
        else
        puts ("O numero e menor que 5");
        
    printf("\n"); // este comando permite pular uma linha
    printf("\n"); // este comando permite pular uma linha
    
    // Imprime os números de 0 a 10
	puts ("======= Impressão dos numeros ate 10 =====");
    printf("\n"); // este comando permite pular uma linha
    cont = 1;
	while( cont <= 10 )
    {
		printf("%d", cont); // imprime um numero
		cont  = cont + 1; // incrementa cont para calcular o proximo numero
	}

	getch();
} // final da função main
