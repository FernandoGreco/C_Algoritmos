#include<stdio.h>

main(){
	
	int i,lista[5]={15,25,45,85,78};
	int maior=lista[0];
	
	for(i=1;i<5;i++){
		if(maior>lista[i])
		maior=lista[i];
		}
		
		printf("Menor:%d",maior);
	
	return(0);
}
