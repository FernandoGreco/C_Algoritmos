#include <stdio.h>
#include <stdlib.h>

void insertsort(int v[5]) {
	for (int i = 1; i < 5; i++) {
		
		int aux = v[i];
		
		int j = i-1;
		
		while (j >= 0 && aux < v[j]) {
			v[j+1] = v[j];
			j--;	
		}
				
		v[j+1] = aux;
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
	
	insertsort(v);
	listar(v);
}
