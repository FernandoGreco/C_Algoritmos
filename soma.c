#include <stdio.h>

int soma(int a, int b) /* "a" e "b" s�o os par�metros da fun��o "soma" */
  {
    int resultado;
    resultado = a + b;
    return(resultado);
  }

int main()
  {
    printf("A soma entre 10 e 2 e %d\n",soma(10,2));

   /* No comando printf acima a fun��o "soma" � chamada
    * com os argumentos 5 e 2 */ 

    return(0);
  }


