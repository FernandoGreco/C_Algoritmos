#include<stdio.h>

main(){
	
	int m[3][3],i,j,maior=0;
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf(": ");
		scanf("%d",&m[i][j]);
		if (maior>m[i][j])
		   maior=m[i][j];;
	}
	printf("Maior valor%d",maior);
	
	getch();
}
