#include<stdio.h>

main(){
	
	
	srand(time(NULL));
	
	int m[10],i,maior,menor;
	
	for(i=0;i<10;i++){
	m[i]=rand()%200;
	printf("%d,",m[i]);	
	if(m[i]>maior)
	maior=m[i];
	if (m[i]<menor)
	menor=m[i];
	}
	printf("\n\nMaior%d e Menor%d",maior,menor);
	
	getch();
	
}

