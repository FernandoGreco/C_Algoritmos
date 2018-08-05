#include <stdio.h>

main ()
{
	int x,y,z;
	printf ("------Descubra se as medidas formam um triangulo--------\n\n");
	
	printf("Digite o primeiro valor: ");
	scanf ("%d",&x);	
	
	printf ("Digite o segundo valor: ");
	scanf ("%d",&y);
		
	printf ("Digite o terceiro valor: ");
	scanf ("%d",&z);
	
	if (x<y+z && y<z+x && z<x+y)
	{
		printf ("Estes valores formam um triangulo");
	}
	else 
	{
		printf ("Estes valores NAO formam um triangulo\a");
	}
	getch ();
}
