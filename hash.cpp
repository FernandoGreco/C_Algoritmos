#include <stdio.h>
#include <stdlib.h>

#define MAX_BUCKET 10
#define MAX_ELEMENTOS 5

// estrutura que define a entrada a ser armazenada
struct elemento {
	int chave;
	char valor;
};

// matriz da tabela hash
// a primeira dimens�o � a posi��o do bucket
// a segunda dimens�o s�o os elementos daquele bucket 
struct elemento tabelaHash[MAX_BUCKET][MAX_ELEMENTOS];

// fun��o hash
// recebe a chave e retorna o �ndice do bucket
int hash(int chave) {
	int bucket = chave % MAX_BUCKET;
	return bucket;
}

// fun��o get
// recebe a chave e retorna o valor correspondente
char get(int chave) {
	
	// calcula o bucket aonde a chave est�
	int bucket = hash(chave);
	
	// itera sobre os elementos daquele bucket 
	// sequencialmente para obter o valor
	for(int i = 0; i < MAX_ELEMENTOS; i++) {
		if (tabelaHash[bucket][i].chave == chave) {
			return tabelaHash[bucket][i].valor;
		}
	}
	
	// valor n�o encontrado
	return '-';
}

// fun��o put
// recebe a chave e o valor e armazena no hash
void put(int chave, char valor) {
	
	// calcula o bucket aonde a chave vai ficar
	int bucket = hash(chave);
	
	// itera sobre os elementos daquele bucket 
	// sequencialmente at� encontrar um espa�o
	// dispon�vel (chave == 0)
	for(int i = 0; i < MAX_ELEMENTOS; i++) {
		
		if (tabelaHash[bucket][i].chave == chave) {
			// elemento duplicado
			break;
		}
		
		if (tabelaHash[bucket][i].chave == 0) {
			// grava o elemento no bucket
			tabelaHash[bucket][i].chave = chave;
			tabelaHash[bucket][i].valor = valor;
			break;
		}
	}			
}

int main() {
		
	// inicializa todas as posi��es do hash
	// com chave = 0
	for (int i = 0; i < MAX_BUCKET; i++)
		for (int j = 0; j < MAX_ELEMENTOS; j++)
			tabelaHash[i][j].chave = 0;
	
	put(81, 'Q');
	put(65, 'A');
	put(90, 'Z');
	put(77, 'M');
	put(70, 'F');
	
	printf("get(65) : %c \n", get(65));	
	printf("get(81) : %c \n", get(81));	
	printf("get(50) : %c \n", get(50));
	printf("get(90) : %c \n", get(90));	
	
}
