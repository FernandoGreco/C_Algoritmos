#include<stdio.h>

main(){
	
	srand(time(NULL));
	
	int m[20],i,soma=0,media=0,cont=0,cont2=0,cont3=0,cont4=0;
	
	for (i=0;i<20;i++){
		m[i]=rand()%100;
		printf("%d,",m[i]);
		if(m[1]<m[i]){
					cont++;
		}
		else if (m[1]>m[i]){
			cont2++;
		}
		
		else if (m[1]==m[i]){cont3++;
		}
		
		soma=soma+m[i];
		media=soma/20;
	}
	
	for(i=0;i<20;i++){
				if(m[i]>media){
			cont4++;
		}
	}
	
	printf("\n\nValor maior pos 1: %d",cont);
	printf("\n\nValor menor pos 1: %d",cont2);
	printf("\n\nValores pos 1: %d",cont3);
	printf("\n\nSoma: %d",soma);	
	printf("\n\nMedia: %d",media);	
	printf("\n\nValores acima da media: %d",cont4);	
	getch();
}
