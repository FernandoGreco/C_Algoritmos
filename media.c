#include <stdio.h>

main ()

{
	int num1,num2,num3,res;
	
	printf ("Digite o priemrio valor");
	scanf ("%d",&num1);
	
	printf ("Digite o segundo valor");
	scanf ("%d",&num2);
	
	printf ("Digite o quarto valor");
	scanf ("%d",&num3);
	
	res=(num1+num2+num3)/3;
	
	printf ("Media e%d",res);
	
	getch ();
	
}
