 # include <stdio.h>
 main(){
        
        // Autor: João Matheus Santos Assis        
        int A[5],i; // Declarando o vetor        
        int maior,menor; 
        
        // Recebendo os valores do vetor        
        for (i=0; i<5; ++i){
            printf(": ");
            scanf("%d",&A[i]);
        }
        
        /* maior e menor recebe inicialmente o valor da primeira posição do vetor*/        
        maior=A[1]; 
        menor=A[1];
        
        
        for (i=0; i<5; ++i){
            if (A[i]>maior) maior=A[i];
            if (A[i]<menor) menor=A[i];
        }
        
        printf("Maior: %d: ",maior);
        printf("Menor: %d",menor);
        
        getch();
 }
