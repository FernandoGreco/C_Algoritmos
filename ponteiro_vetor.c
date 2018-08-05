#include<stdio.h>

int main (){
	srand(time(NULL));
	int vetor[50];
	int *ponteiro = vetor;
	int i;
	//*(ponteiro +1)=10;
		
		for(i-0;i<50;i++){
		*(ponteiro +i) = rand()%100;
			printf("%d\n",*(ponteiro +i));
		}
   		
	   
	
	
	getch();
}
