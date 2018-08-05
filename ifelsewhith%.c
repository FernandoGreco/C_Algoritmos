#include <stdio.h>

int main()
{
	
float pd,pp,res;

printf ("Numero de pecas defeituosas: ");
scanf ("%f",&pd);

printf ("Numero de producao: ");
scanf ("%f",&pp);

res=(pp*10)/100;

if (pd > res ){
printf ("A maquina precisa de manutenção");
}

else  
printf ("A maquina nao precisa de manutencao");

getch ();

}
