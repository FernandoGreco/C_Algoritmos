#include <stdio.h>

main (){

int c,j,p,t,vm;

printf ("Capital?: ");
scanf ("%d",&c);

printf ("Juros: ");
scanf ("%d",&j);

printf ("Periodo: ");
scanf ("%d",&p);

for (t=1;t<=p;t++)

vm=c*j;

printf ("Juros %d=%d\n",t,vm);

}

getch ();
