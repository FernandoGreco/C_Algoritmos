#include <stdio.h>

void imprimee_par(int a, int b);

int main ()

	{
		imprime_par(3,4); //chamando função
		imprime_par(-2,8); //chamando novamente
		return 0;
	}
	
void imprime_par(int a, int b)
{
printf("{%d,%d}\n",a,b);
}
