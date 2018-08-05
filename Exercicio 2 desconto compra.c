#include <stdio.h>



float main()
{ // Início da função main

    // Declaração das variáveis a serem utilizadas
	float v1,v2;    // variáveis tipo inteiro


	system("CLS"); // este comando permite limpar a tela
	printf("Valor da compra:R$ ");
	scanf("%f", &v1); // lê um número e armazena seu valor em numero_lido
	printf("\n"); // este comando permite pular uma linha

	printf("==========================");
	printf("\n");

	if (v1 >= 200)
	{
	    v2 = v1*0.2;
        printf ("Valor desconto R$:%0.2f",v2 );
      }

	    else {

		v2 = v1*0.15;
       printf ("O desconto e: R$:%0.2f",v2 );
       }

	getch();
} // final da função main
