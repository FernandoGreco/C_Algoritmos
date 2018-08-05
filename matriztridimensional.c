#include<stdio.h>
#define m 10

main(){
	
	
	srand(time(NULL));
	int x[m],y[m],z[m],c,d,e,c1,d1,aux=0;
	
	for(c=0;c<m;c++){
		x[c]=rand()%5;
		printf("%d,",x[c]);
		for(d=0;d<m;d++){
			y[d]=rand()%40+30;
			printf("%d,",y[d]);
			for(e=0;e<m;e++){
				z[e]=rand()%100+30;
				printf("%d,",z[e]);
			}
		}
	}
	printf("\n\n*****1 matriz ordenada****\n\n");
	
	for(c=0;c<m;c++){
		for(c1=c+1;c1<m;c1++){
			if(x[c]>x[c1]){
				aux=x[c];
				x[c]=x[c1];
				x[c1]=aux;
			}
		}
	}
	for(c=0;c<m;c++){
		printf("%d,",x[c]);
	}
	
	printf("\n\n*****2 matriz ordenada****\n\n");
	
	for(d=0;d<m;d++){
		for(d1=d+1;d1<m;d1++){
			if(y[d]>y[d1]){
				aux=y[d];
				y[d]=y[d1];
				y[d1]=aux;
			}
		}
	}
	for(d=0;d<m;d++){
		printf("%d,",y[d]);
	}
	getch();
}
