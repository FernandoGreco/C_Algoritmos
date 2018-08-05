#include <stdio.h>

int main()
{ // Início da função main

    // Declaração das variáveis a serem utilizadas
	float a1,a2,res;   // variáveis tipo inteiro
    

	system("CLS"); // este comando permite limpar a tela
	printf("Digite a altura: ");
	scanf("%f",&a1);

	printf("Digite 1 (Masculino) ou 2 (Feminino)?: ");
	scanf("%f", &a2); // lê um número e armazena seu valor em numero_lido


	printf("======================================");
	printf("\n");

	if (a2 = 1)
	{
	    res = (72.7*a1)-58;
        printf ("O seu peso ideal e :%0.2f",res );  //puts permite escrever uma mensagem na tela
      }

	    else {

		res = (62.1*a1)-44.7;
       printf ("O peso ideal e :%0.2f",res );
       }

	getch();
} // final da função main
