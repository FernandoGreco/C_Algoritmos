#include <stdio.h>

int main()
{ 
    
	float a1,base,altura,raio,res; 
    
	system("CLS"); // este comando permite limpar a tela
	printf("Para fazer o calculo da Area; digite o numero referente ao objeto: \n\nTriangulo ou Trapezio |1| \nRetangulo |2|\nCircunferencia |3|\n\n:");
	scanf("%f",&a1);

	printf("======================================");
	printf("\n");

	if (a1 == 1)
	{
	    printf ("Digite o Valor da Base: " );
	    scanf ("%f",&base);
	    
	    printf ("Digite o Valor da Altura: " );
	    scanf ("%f",&altura);
	        res = (base*altura)/2; 	    
	        printf("Area do triangulo/trapezio = %0.1f", res);	    
      }
	    else  if (a1==2){
	    	
		printf ("Digite o Valor da Base: " );
	    scanf ("%f",&base);
	    
	    printf ("Digite o Valor da Altura: " );
	    scanf ("%f",&altura);
	        res = base*altura; 	    
	        printf("Area do retangulo: %0.1f", res);
       }
       else 
       {
			printf("Informe o valor do raio: ");
	scanf("%f", &raio);
           
	res = ((3.14*2)*raio) *2;
		  
	        printf("Area da circunferencia e: = %0.1f", res);
       }

	getch();
} // final da função main
