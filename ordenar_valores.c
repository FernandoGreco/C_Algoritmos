#include<stdio.h>

main(){
	
	srand(time(NULL));
	
	int v[10],i,j,aux;
	
	for(i=0;i<10;i++){
		v[i]=rand()%100;
		printf("%d-",v[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(v[i]<v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	
	printf("\n\nValores ordenados\n\n");
	
	for(i=0;i<10;i++){
		printf("%d-",v[i]);
	}
	
	getch();
}
