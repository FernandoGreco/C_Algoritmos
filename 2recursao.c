#include <stdio.h>
 
void main()
{
  
  int a, b, auxiliar, i, n;
 
  
  a = 0;
  b = 1;
 
  printf("Digite um numero: ");

  scanf("%d", &n);
  printf("S�rie de Fibonacci:\n");
  printf("%d\n", b);
 
  
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
   
    printf("%d\n", auxiliar);
  }
}
