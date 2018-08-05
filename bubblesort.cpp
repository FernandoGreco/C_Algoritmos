#include <stdio.h>
#include <stdlib.h>

void bubblesort(int v[5]) {
	
	// I de 5 até 1
	for (int i = 5; i > 0; i--) {
		
		// J de 0 até i-1
		for (int j = 0; j < i-1; j++) {
			
			// verifica se o par J e J+1 devem ser trocados
			if (v[j] > v[j+1]) {
				
				// se sim, troca
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
			
		}
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
	
	bubblesort(v);
	listar(v);
}
