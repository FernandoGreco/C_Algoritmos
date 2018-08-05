#include<stdio.h>
#include<math.h>

int main(void){

    srand(time(NULL));

	float *xi,*fi,*xifi,media,somaxifi=0,somafi=0,varmostral,somavar,somafiamostral,desviopadrao,coeficienteamostral;
	int i,j,quant,moda=0,posimoda=0,fac=0,pos,mediana;
	
	printf("Informe a quantidade de componentes:\n");
    scanf("%d", &quant);
    
    xi=(float*)malloc(quant*sizeof(float));
    fi=(float*)malloc(quant*sizeof(float));
    xifi=(float*)malloc(quant*sizeof(float));
    
	
	printf("\n\nValores para XI\n\n");
	
	for(i=0;i<quant;i++){
	printf(": ");
	scanf("%f",&xi[i]);
	}

	printf("\n\nValores para FI\n\n");
	
	for(i=0;i<quant;i++){
	printf(": ");
	scanf("%f",&fi[i]);
		somafi=somafi+fi[i];
	}
	printf("\n\nFAC\n\n");
	for(i=0;i<quant;i++){
		fac+=fi[i];
		printf("%d/",fac);
	}
	printf("\n\nXIFI\n\n");
	
	for(i=0;i<quant;i++){
		xifi[i]=xi[i]*fi[i];
	}
	
	for(i=0;i<quant;i++){
		printf("%0.2f/",xifi[i]);
	}
	
	for(i=0;i<quant;i++){
		somaxifi=somaxifi+xifi[i];
	}
	
	media=somaxifi/somafi;
	
	printf("\n\nSoma FI: %0.0f / Soma XIFI:%0.0f\n\n",somafi,somaxifi);
	printf("Media %0.2f",media);
	
	for(i=0;i<quant;i++){
		if(fi[i]>moda){
				moda=fi[i];
				posimoda=xi[i];
				pos=i;
				}
		}
		
mediana=somafi/2;
    
 
  	
	printf("\n\nA moda e XI %d, na posicao I %d se repetindo por FI %d vezes\n\n",posimoda,pos,moda);
    printf("\n\nMediana esta no FAC %d" ,mediana);
 
   	//calculo desvio padrão amostral 
    	for(i=0;i<quant;i++){
    	varmostral=xi[i]- media;
    	varmostral=varmostral*varmostral*fi[i];
        somavar=somavar+varmostral;
    	}
    
    somafiamostral=(somafi)-1;
    
	somavar=somavar/somafiamostral;
        
    desviopadrao=sqrt(somavar);
      printf("\n\nDesvio Padrao Amostral:%f\n\n",desviopadrao);
   
    coeficienteamostral=desviopadrao/media;
   
   
   printf("\nCoeficiente padrao:%f",coeficienteamostral);
    
 
   
	free(xi);
	free(fi);
	free(xifi);
		
	getch();
}
