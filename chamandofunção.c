#include <stdio.h>

int soma_1(int a);

int main()
  {
    int nr = 1;

    printf("Chamando a fun��o a primeira vez: valor + 1 = %d\n",soma_1(nr));
    printf("Chamando a fun��o pela segunda vez: : valor + 1 = %d\n",soma_1(nr));
    printf("Chamando a fun��o pela terceira vez: : valor + 1 = %d\n",soma_1(nr));
    
    return(0);
  }

int soma_1(int a)
  {
    static int valor = 1;

    printf("valor = %d\n",valor);
    
    valor = valor + a;

    return(valor);
  }

