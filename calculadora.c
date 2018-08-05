#include <stdio.h>

int main (void){

char s;
	
float v1,v2,res;	

	printf ("################----CALCULADORA----##################\n\n");
	
	printf ("Digite a operacao:(+)(-)(*)(/) ");
    scanf ("%c",&s);
	
	printf ("Digite o primeiro valor: ");
	scanf ("%f",&v1);
 
    printf ("Digite o segundo valor: ");
	scanf ("%f",&v2);
	
		switch (s)
	{
		case '+': res= v1+v2;
		printf ("Resultado:%0.2f",res); break;
	    
		case '-': res= v1-v2;
		printf ("Resultado:%0.2f",res); break;
	    
	    case '*': res= v1*v2;
		printf ("Resultado:%0.2f",res); break;
	    
		case '/': res= v1/v2;
		printf ("Resultado:%0.2f",res); break;
	    
		default: printf ("Invalido\n"); break;	
	}
	
	getch ();
	
	
} 
