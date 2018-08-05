#include <stdio.h>
#include<stdlib.h>

void bouble_sort (int vetor[]){
	int i,j,aux,cont=0;
    
	printf("\n-Odenado ordem crescente por Bouble_sort:");
    
	for(i=0;i<10;i++){
    	for(j=i+1;j<10;j++){
    		if(vetor[i]>vetor[j]){
    			cont++;
				aux=vetor[i];
    			vetor[i]=vetor[j];
    			vetor[j]=aux;
			}
		}
	}
    for(i=0;i<10;i++)
    printf("%d-",vetor[i]);    
   	printf("\nBouble_sort realizou %d trocas",cont); 
    
}

void selec_sort(int vetor[], int tam) 
{ 
printf("\n\n-Odenado ordem crescente por Selec_sort:");
  int i, j, min, aux,cont;
  for (i = 0; i < (tam-1); i++) 
   {
    min = i;
    for (j = (i+1); j < tam; j++) {
      if(vetor[j] < vetor[min]) 
        min = j;
    }
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
      cont++;
    }
  }
  for(i=0;i<10;i++)
    printf("%d-",vetor[i]);    
 	printf("\nSelec_sort realizou %d trocas",cont); 
}

void insert_sort(int vetor[], int tamanho) {
      int i, j, tmp,cont;
      printf("\n\n-Odenado ordem crescente por Insert Sort:");
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && vetor[j - 1] > vetor[j]) {
                  tmp = vetor[j];
                  vetor[j] = vetor[j - 1];
                  vetor[j - 1] = tmp;
                  j--;
                  cont++;
            }
      }
    for(i=0;i<10;i++)
    printf("%d-",vetor[i]);    
 	printf("\nInsert Sort realizou %d trocas",cont); 
}

void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
	int i, j, k, metadeTamanho, *vetorTemp;
    if(posicaoInicio == posicaoFim) return;

    // ordenacao recursiva das duas metades
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2;
    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);
 	
    // intercalacao no vetor temporario t
    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
        if (i == metadeTamanho + 1 ) { // i passou do final da primeira metade, pegar v[j]
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        } 
        else {
            if (j == posicaoFim + 1) { // j passou do final da segunda metade, pegar v[i]
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            } 
            else {
                if (vetor[i] < vetor[j]) { 
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                } 
                else { 
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }

    }
    // copia vetor intercalado para o vetor original
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
}

void quick(int vet[], int esq, int dir){	
    int pivo = esq,i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
         ch = vet[j];
         while(j > pivo){    
            vet[j] = vet[j-1];
            j--;
         }
         vet[j] = ch;
         pivo++;        
        }  
    }
    if(pivo-1 > esq){
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 < dir){
        quick(vet,dir,pivo+1);
    }
    printf("\n\n-Odenado ordem crescente por Quick Sort:");
    for(i=0;i<10;i++)
    printf("%d-",vet[i]);
 }



int main(void)
{
	int i;
    int vetor_decrescente[10] = {10,9,8,7,6,5,4,3,2,1};
    printf("VETOR ORDEM DECRESCENTE:");
    for(i=0;i<10;i++)
    printf("%d-",vetor_decrescente[i]);
    printf("\n");
    
    bouble_sort(vetor_decrescente);
    selec_sort (vetor_decrescente,10);
    insert_sort (vetor_decrescente,10);
    mergeSort (vetor_decrescente,0,10);
    quick (vetor_decrescente,0,10);
    
    
}
