#include <stdio.h>



float main()
{ // In�cio da fun��o main

    // Declara��o das vari�veis a serem utilizadas
	float v1,v2;    // vari�veis tipo inteiro


	system("CLS"); // este comando permite limpar a tela
	printf("Valor da compra:R$ ");
	scanf("%f", &v1); // l� um n�mero e armazena seu valor em numero_lido
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
} // final da fun��o main
