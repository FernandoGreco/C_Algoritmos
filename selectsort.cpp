#include <stdio.h>
#include <stdlib.h>

void selectsort(int v[5]) {
	
	// percorre o vetor até a penúltima posição
	for (int i = 0; i < 4; i++) {
		
		// armazena o índice do menor valor do subvetor
		int minI = i;
		
		// percorre o subvetor a partir do índice I
		for (int j = i+1; j < 5; j++) {
		
			// atualiza o índice do menor valor (minI)
			// quando encontrar algum elemento no subvetor 
			// que for menor que ele
			if (v[j] < v[minI]) {
				minI = j;
			}
			
		}
		
		// após isso, o v[minI] é o menor valor conhecido
		// no subvetor que ainda não foi ordenado
		
		// troca o menor elemento conhecido
		// com a posição inicial do subvetor
		int aux = v[i];
		v[i] = v[minI];
		v[minI] = aux;
		
	}
}

void listar(int v[5]) {
	printf("->");
	
	for (int i = 0; i < 5; i++) {
		printf(" %d ", v[i]);
	}
	
	printf("\n");
}

int main() {
	int v[5] = { 5,3,1,2,4 };
	listar(v);
	
	selectsort(v);
	listar(v);
}
