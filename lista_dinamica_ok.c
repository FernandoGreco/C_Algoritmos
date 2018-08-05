#include <stdio.h>
#include <stdlib.h>

// Essa é a nossa estrutura da lista
// Cada struct conteudo representa
// um único elemento na lista
struct conteudo {
	char valor;
	struct conteudo *prox;	
};

// Essa é a variável global que armazena a
// cabeça da lista
// Quando a lista está vazia, o seu valor é nulo
// Quando a lista possui elementos, o seu valor é o endereço de 
// memória do primeiro elemento
struct conteudo *p;

void inserir(int index, char valor) {
	
	printf("\n inserir(index: %d, valor: %c)", index, valor);
	
	// O ponteiro do início da lista está nulo
	// então é uma inserção em uma lista vazia
	if (p == NULL) {
		
		// Sendo assim, basta alocar o endereço da estrutura
		// de conteúdo e armazená-la no ponteiro da cabeça da 
		// lista
		p = (struct conteudo*)malloc(sizeof(struct conteudo));
		
		// Como é o único elemento na lista, ele não possui próximo
		// e marcamos o campo PROX de conteúdo, como nulo
		p->prox = NULL;
		
		// O valor deste elemento é o parâmetro VALOR
		p->valor = valor;
	}
	
	// O índice recebido possui o valor 0, que representa o primeiro
	// elemento na lista
	// Isso significa que a inserção é na cabeça da lista e que o ponteiro
	// P que armazena a cabeça da lista, deve mudar para apontar para este novo elemento
	else if (index == 0) {
		
		// Sendo assim, basta alocar o endereço da estrutura
		// de conteúdo e armazená-la em uma variável auxiliar AUX
		struct conteudo *aux = (struct conteudo*)malloc(sizeof(struct conteudo));
		
		// Esse novo elemento é a nova cabeça da lista
		// Portanto, ele deve apontar para a antiga cabeça, variável P
		aux->prox = p;
		aux->valor = valor;
		
		// E atualizamos a antiga cabeça (variável P) para apontar
		// a este novo elemento (variável AUX)
		p = aux;
	}
	
	// Inserção no meio ou no fim da lista
	else {
		
		int j = 1;
		struct conteudo *aux = p;
		
		// Percorro a lista usando a variável aux enquanto:
		// 1. (j < index) não encontrar a posição que preciso inserir
		// 2. (aux != NULL) não cheguei no fim da lista
		while (j < index && aux != NULL) {
			
			aux = aux->prox;
			j++;
		}
		
		// Quando sair do while, usamos essa condição para determinar
		// se encontramos a posição a ser inserida ou não
		if (j == index) {
			struct conteudo *aux2 = (struct conteudo*)malloc(sizeof(struct conteudo));
			aux2->prox = aux->prox;
			aux2->valor = valor;
			aux->prox = aux2;
		}
		
	}
	
}

void remover(int index) {
	
	printf("\n remover(index: %d)", index);
	
	if (p == NULL) {
		// Lista vazia, nada precisa ser feito
		// pois não temos elementos para remover
	}
	
	// Quando o INDEX é zero, devemos remover a cabeça da lista
	else if (index == 0) {
		
		// Armazenamos a cabeça atual (variável P) em uma variável
		// auxiliar AUX
		struct conteudo *aux = p;
		
		// Mudamos a cabeça da lista para apontar ao segundo elemento
		p = p->prox;
		
		// Como o AUX estava referenciando a cabeça que queríamos
		// remover, basta chamar a função FREE
		free(aux);
	}
	
	// Remoção no meio ou no final da lista
	else {
		
		int j = 1;
		struct conteudo *aux = p;
		
		// Percorro a lista usando a variável aux enquanto:
		// 1. (j < index) não encontrar a posição que preciso remover
		// 2. (aux != NULL) não cheguei no fim da lista
		while (j < index && aux != NULL) {
			aux = aux->prox;
			j++;
		}
		
		// Quando sair do while, usamos essa condição para determinar
		// se encontramos a posição a ser inserida ou não
		if (j == index) {
			struct conteudo *aux2 = aux->prox;
			aux->prox = aux2->prox;
			free(aux2);
		}
		
	}
		
}

void imprimir() {
	
	printf("\n imprimir: ");
	
	// Copio o endereço da cabeça da lista em 
	// na variável AUX
	struct conteudo *aux = p;
	
	// Enquanto houver elementos na lista
	while (aux != NULL) {
		
		// Imprimo o valor daquele elemento
		printf(" %c ", aux->valor);
		
		// Mudo AUX para apontar para o próximo elemento
		aux = aux->prox;
	}
	
}

int pesquisar(char valor) {
		
	// Inicia-se a variável INDEX em 0
	// ela faz a contagem do índice a 
	// ser retornado neste método
	int index = 0;
	
	// Copio o endereço da cabeça da lista em 
	// na variável AUX
	// Essa variável é utilizada para navegar
	// pela lista
	struct conteudo *aux = p;
	
	// Enquanto AUX for diferente de nulo
	// significa que não chegamos ao final
	// da lista
	while(aux != NULL) {
		
		// Comparo o valor recebido como parâmetro
		// com o valor do elemento AUX
		// Se forem iguais, achei o elemento que procurava
		// e só é necessário retornar o INDEX
		if (valor == aux->valor)  {
			return index;
		} 
		
		// Se não encontrei o elemento que procurava,
		// mudo o AUX para o elemento seguinte na lista
		// e incremento o INDEX
		else {
			aux = aux->prox;
			index++;
		}
		
	}
	
	return -1;
}

int main() {
	
	inserir(0, 'A');
	inserir(1, 'B');
	inserir(2, 'C');
	inserir(3, 'D');
	imprimir();
	
	inserir(1, 'X');
	imprimir();
	
	remover(2);
	imprimir();
	
	remover(1);
	imprimir();
	
	printf("\n pesquisar(A): %d ", pesquisar('A'));
	printf("\n pesquisar(C): %d ", pesquisar('C'));
	printf("\n pesquisar(D): %d ", pesquisar('D'));
	printf("\n pesquisar(W): %d ", pesquisar('W'));
}
