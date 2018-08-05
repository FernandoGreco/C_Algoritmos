#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
 
int main(void)
{
	srand(time(NULL));
    float *v; //definindo o ponteiro v
    int i, num_componentes,aux,j;    
     
    printf("Informe o numero de componentes do rool\n");
    scanf("%d", &num_componentes);
   
    v = (float *) malloc(num_componentes * sizeof(float));  
     //Armazenando os dados em um vetor
    for (i = 0; i < num_componentes; i++)
    {
      printf(": ");
	  scanf("%f",&v[i]);
    }   
   printf("\n*********** Valores do vetor dinamico ************\n\n");
    for (i = 0;i < num_componentes; i++)
   {
    for(j=i+1;j<num_componentes;j++){
    	if(v[i]>v[j]){
    		aux=v[i];
    		v[i]=v[j];
    		v[j]=aux;
    	}
    }
   }  
 
   for(i=0;i<num_componentes;i++){
   	printf("%.2f,",v[i]);  
   }
      
   //liberando o espaço de memória alocado 
   free(v);
   getch();
   return 0;
}   
