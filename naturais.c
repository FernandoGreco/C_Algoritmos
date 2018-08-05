#include<stdio.h>

void naturais(int n){
    printf("%d-",n);
	if(n>0)
	naturais(n-1);
	
}

main(){
	
	int n;
	printf("Digite valor: ");
	scanf("%d",&n);
	
	naturais (n);
	
	getch();

}
