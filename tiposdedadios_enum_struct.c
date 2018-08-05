#include<stdio.h>

main(){
	
	
	enum {dom,seg,ter,qua,qui,sex,sab
	};
	int diadasemana=dom;
	
	
	if(diadasemana==dom||diadasemana==sab){
		printf("Dia de folga");
	}
	else {
		printf("Dia de trabalho");
	}
	getch();
}
