#include<stdio.h>
#include<string.h>

main(){
	
	struct TipoAluno{
		int Nota;
		char Nome[30];
	};
	
	struct TipoAluno Alunos[25];
	
	Alunos[0].Nota=10;
	strcpy(Alunos[0].Nome,"Marcos");
	
	Alunos[1].Nota=7;
	strcpy(Alunos[1].Nome,"maldito");
	
	Alunos[3].Nota=4;
	strcpy(Alunos[3].Nome,"ertrucales");
	int i;
	
	for(i=0;i<5;i++){
		
		printf("Aluno: %s - Nota: %d\n",Alunos[i].Nome,Alunos[i].Nota);
	}
	getch();
}
