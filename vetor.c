#include <stdio.h>
#include <conio.h>
#define MAX 80

float notas [MAX], total=0, media;
int i;

void main (void)
{clrscr();

for (i=0; i<MAX; i++)
{ print ("\nDigite a nota do aluno %d: ",i);
scanf ("%f", &notas[i]);
total +=notas [i];
}

media = (float) total /MAX;
for (i=0; i < MAX; i++)
printf ("\nNota do Aluno &d=1.1f - Media da turma=%1.2f",i,notas [i], media);

printf ("\n\nFim do programa");
getch ();
}
