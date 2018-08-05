#include <stdio.h>

int soma(int a, int b) /* "a" e "b" são os parâmetros da função "soma" */
  {
    int resultado;
    resultado = a + b;
    return(resultado);
  }

int main()
  {
    printf("A soma entre 10 e 2 e %d\n",soma(10,2));

   /* No comando printf acima a função "soma" é chamada
    * com os argumentos 5 e 2 */ 

    return(0);
  }


