#include <stdio.h>

int main()
{
float tc,vf;

printf ("Total de copias: ");
scanf ("%f",&tc);


if (tc <100 ){
vf=tc*0.25;
printf ("Valor:R$%0.2f",vf);
}


else if (tc > 100){
vf = tc * 0.20;

printf ("Valor:R$%0.2f",vf);
}
getch ();

}
