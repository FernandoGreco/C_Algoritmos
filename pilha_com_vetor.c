#include<stdio.h>
#include<stdlib.h>

int topo;
char pilha[50];

void push (char x){
	pilha[topo]=x;
	topo++;
}

char pop(){
	topo--;
	return pilha[topo];
}

int main(){
topo=0;

push('A');
push('B');
push('C');
int i;
for(i=0;i<topo;i++){
	printf("%c\n",pilha[i]);
}
printf("\n\n");

while (topo>=0){
	printf("%c\n",pilha[topo]);
	topo--;
}
}
