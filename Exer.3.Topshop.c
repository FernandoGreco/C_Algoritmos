#include <stdio.h>

main ()
{
	
	float esc,cb,ct,gb,gt,cg,resb,rest,resf,rest2,resf2,resfcg;
	
	while (esc != 0.5)
	{
		printf ("SERVICO PARA CACHORRO DIGITE: 1\nSERVICO PARA GATO DIGITE 2\nSERVICO PARA GATO E CACHORRO DIGITE: 3\nPara finalizar digite 0.5 e tecle enter\n");
	scanf ("%f", &esc);	
	
	 if (esc==1){
	 
	   	printf ("R$ 60,00 - Quantidade de Servico Banho: ");   //calcula valor serviço para cachorros
		scanf ("%f", &cb);
		
		printf ("R$ 45,00 - Quantidade de Servico Tosa: ");
		scanf("%f",&ct);
				
		resb = cb*60;
		printf ("\nServico banho:R$%0.2f\n",resb);
		
		rest = ct*45;
		printf ("Servico tosa:R$%0.2f\n",rest);
		
		resf = resb + rest;
		printf ("Total:%0.2f\n\n",resf);
				}
				else if (esc==2)
				{ 
				
		printf ("R$ 50,00 - Quantidade de Servico Banho: ");  //calcula valor serviço para gatos
		scanf ("%f", &gb);
		
		printf ("R$ 20,00 - Quantidade de Servico Tosa: ");
		scanf("%f",&gt);
				
		resb = gb*50;
		printf ("\nServico banho:R$%0.2f\n",resb);
		
		rest = gt*20;
		printf ("Servico tosa:R$%0.2f\n",rest);
		
		resf = resb + rest;
		printf ("Total:%0.2f\n\n",resf);
				}
				
				else if (esc==3) { 
				
		printf ("R$ 60,00 - Quantidade de Servico Banho <Cachorro>: ");  //calcula valor serviço para cachorros e gatos
		scanf ("%f", &cb);
		
		printf ("R$ 45,00 - Quantidade de Servico Tosa <Cachorro>: ");
		scanf("%f",&ct);
				
		resb = cb*60;
		printf ("\nServico banho <Cachorro> :R$%0.2f\n",resb);
		
		rest = ct*45;
		printf ("Servico tosa <Cachorro> :R$%0.2f\n",rest);
		
		resf = resb + rest;
		printf ("Total Serviço <Cachorro> :R$%0.2f\n\n",resf);
		
		
		printf ("R$ 50,00 - Quantidade de Servico Banho <Gato>: ");
		scanf ("%f", &gb);
		
		printf ("R$ 20,00 - Quantidade de Servico Tosa <Gato>: ");
		scanf("%f",&gt);
				
		resb = gb*50;
		printf ("\nServico banho <Gato> :R$%0.2f\n",resb);
		
		rest2 = gt*20;
		printf ("Servico tosa <Gato>:R$%0.2f\n",rest2);
		
		resf2 = resb + rest2;
		printf ("Total <Gato>:R$%0.2f\n\n",resf2);
		
		resfcg = resf + resf2;
		
		printf ("Valor total servico gato e cachorro:R$%0.2f\n\n\n",resfcg);
		
				}
				
				else {printf ("Programa Finalizado");
				}
	} 

	
			
	getch();
}
