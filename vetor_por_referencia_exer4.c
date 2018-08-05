#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maior_menor (int vet[30],int *maior,int *menor){
int i;
*maior=vet[0];
*menor=vet[0];
for (i=1;i<30;i++){
 if(vet[i]>*maior){
 *maior=vet[i];
 }	if (vet[i]<*menor) {
 	*menor=vet[i];
 }
}
};


int main(){
	srand(time(NULL));
	int vet[30],i,maior,menor;
	
	for(i=0;i<30;i++){
		vet[i]=rand()%100;
		printf("%d-",vet[i]);
		maior_menor (vet,&maior,&menor);
	};
	printf("\n\nvalor maior%d\n\n",maior);
	printf("valor menor%d\n\n",menor);
getch();
};
	

