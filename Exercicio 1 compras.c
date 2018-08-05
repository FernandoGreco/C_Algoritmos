#include <stdio.h>
    
    int main(void)
    {
        float a,b,c,d,e,f,g,h,res,stop;
                
         printf ("DIGITE A QUANTIDADE DO PRODUTO COMPRADO; PARA CALCULAR VALOR TOTAL""\n\n\n");
         
        do
	{
        printf ("-----------------PEDACOS DE BOLO (preco unitario)-------------------\n\n");
        printf ("Bolo Floresta Negra - Valor R$ 6,00 - Quantidade: ");
        scanf("%f", &a);
                
        printf ("Bolo de Chocolate -Valor R$ 5,00 -  Quantidade: ");
        scanf("%f", &b);
        
        printf ("Bolo de Abacaxi - Valor R$ 4,00 - Quantidade: ");
        scanf("%f", &c);
        
        printf ("Bolo do coco - Valor R$ 3,00 - Quantidade: ");
        scanf("%f", &d);
         
        printf ("\n------------------SALGADOS (preco unitario)--------------------------\n\n");
        
		printf ("Coxinha - Valor R$ 3,00 - Quantidade: ");
        scanf("%f", &e);
        
        printf ("Esfirra - Valor R$ 4,00 - Quantidade: ");
        scanf("%f", &f);
        
        printf ("Risole de queijo - Valor R$ 3,50 - Quantidade: ");
        scanf("%f", &g);
        
        printf ("Bolinho de Bacalhau - Valor R$ 7,00 - Quantidade: ");
        scanf("%f", &h);
               		  
        res = (6*a)+(5*b)+(4*c)+(3*d)+(3*e)+(4*f)+(3.5*g)+(7*h); 
               printf ("\nTotal:R$%0.2f\n", res);
               
        printf ("\n\nDigite 1 para continuar ou 2 para sair\n\n ");
        scanf("%f", &stop);
      		
          } while (stop == 1); 
       return 0;
   }
