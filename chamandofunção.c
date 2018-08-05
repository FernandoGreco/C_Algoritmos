#include <stdio.h>

int soma_1(int a);

int main()
  {
    int nr = 1;

    printf("Chamando a função a primeira vez: valor + 1 = %d\n",soma_1(nr));
    printf("Chamando a função pela segunda vez: : valor + 1 = %d\n",soma_1(nr));
    printf("Chamando a função pela terceira vez: : valor + 1 = %d\n",soma_1(nr));
    
    return(0);
  }

int soma_1(int a)
  {
    static int valor = 1;

    printf("valor = %d\n",valor);
    
    valor = valor + a;

    return(valor);
  }

