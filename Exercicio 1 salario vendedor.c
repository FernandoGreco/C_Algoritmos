#include <stdio.h>

main ()
{
	
float ven1,ven2,ven3,ven4,ven5;

	printf ("1 Vendedor - - Valor de Vendas R$ ");
	scanf ("%f", &ven1);
	
	if (ven1>20000)
	{
		ven1=ven1*0.1;
		printf ("Seu salario e:R$%0.2f\n\n",ven1);
	}
	else
	{
		ven1=ven1*0.075;
		printf ("Seu salario e:R$%0.2f\n\n",ven1);
	}
	
	printf ("2 Vendedor - - Valor de Vendas R$: ");
	scanf ("%f",&ven2);
	
	if (ven2>20000)
	{
		ven2=ven2*0.1;
		printf ("Seu salario e:R$%0.2f\n\n",ven2);
	}
	else
	{
		ven2=ven2*0.075;
		printf ("Seu salario e:R$%0.2f\n\n",ven2);
	}
	
	printf ("3 Vendedor - - Valor de Vendas R$: ");
	scanf ("%f",&ven3);
	
	if (ven3>20000)
	{
		ven3=ven3*0.1;
		printf ("Seu salario e:R$%0.2f\n\n",ven3);
	}
	else
	{
		ven3=ven3*0.075;
		printf ("Seu salario e:R$%0.2f\n\n",ven3);
	}
	
	printf ("4 Vendedor - - Valor de Vendas R$: ");
	scanf ("%f",&ven4);
	
	if (ven4>20000)
	{
		ven4=ven4*0.1;
		printf ("Seu salario e:R$%0.2f\n\n",ven4);
	}
	else
	{
		ven4=ven4*0.075;
		printf ("Seu salario e:R$%0.2f\n\n",ven4);
	}
	
	printf ("5 Vendedor - - Valor de Vendas R$: ");
	scanf ("%f",&ven5);
	
	if (ven5>20000)
	{
		ven5=ven5*0.1;
		printf ("Seu salario e:R$%0.2f\n\n\a",ven5);
	}
	else
	{
		ven5=ven5*0.075;
		printf ("Seu salario e:R$%0.2f\n\n\a",ven5);
	}
	getch ();
	
}
