#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef	struct empresas p;

struct empresas{
int id;
}

main(){
	
p empresas; ////variável p do tipo struct empresas
p *pont; //ponteiro pont para um tipo struct empresas
pont=&empresas; //pont aponta para o endereço de empresas

pont->id=5;

 
printf("%d",pont->id);//imprime id empresas

printf("\n%d",sizeof(p)); //tamanho da struct empresas

	getch();
}
