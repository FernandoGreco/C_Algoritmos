#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int *p;
	p = (int *) malloc (10 * sizeof(int));
	int i;
	
	*p=10;
	p[1]=20;
//	printf("%d",sizeof(p));
	
	
	for(i=0;i<10;i++){
		printf("\nendereco de p%d = %x = valor de %d = %x",i,(p+i),i,*(p+i));
	}
	
	
	free(p);
 	 p=NULL;
	
	printf("\n%x",p);
	
	
	return 0;
};
