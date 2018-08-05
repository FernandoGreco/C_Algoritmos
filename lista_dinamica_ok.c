#include <stdio.h>
#include <stdlib.h>

// Essa � a nossa estrutura da lista
// Cada struct conteudo representa
// um �nico elemento na lista
struct conteudo {
	char valor;
	struct conteudo *prox;	
};

// Essa � a vari�vel global que armazena a
// cabe�a da lista
// Quando a lista est� vazia, o seu valor � nulo
// Quando a lista possui elementos, o seu valor � o endere�o de 
// mem�ria do primeiro elemento
struct conteudo *p;

void inserir(int index, char valor) {
	
	printf("\n inserir(index: %d, valor: %c)", index, valor);
	
	// O ponteiro do in�cio da lista est� nulo
	// ent�o � uma inser��o em uma lista vazia
	if (p == NULL) {
		
		// Sendo assim, basta alocar o endere�o da estrutura
		// de conte�do e armazen�-la no ponteiro da cabe�a da 
		// lista
		p = (struct conteudo*)malloc(sizeof(struct conteudo));
		
		// Como � o �nico elemento na lista, ele n�o possui pr�ximo
		// e marcamos o campo PROX de conte�do, como nulo
		p->prox = NULL;
		
		// O valor deste elemento � o par�metro VALOR
		p->valor = valor;
	}
	
	// O �ndice recebido possui o valor 0, que representa o primeiro
	// elemento na lista
	// Isso significa que a inser��o � na cabe�a da lista e que o ponteiro
	// P que armazena a cabe�a da lista, deve mudar para apontar para este novo elemento
	else if (index == 0) {
		
		// Sendo assim, basta alocar o endere�o da estrutura
		// de conte�do e armazen�-la em uma vari�vel auxiliar AUX
		struct conteudo *aux = (struct conteudo*)malloc(sizeof(struct conteudo));
		
		// Esse novo elemento � a nova cabe�a da lista
		// Portanto, ele deve apontar para a antiga cabe�a, vari�vel P
		aux->prox = p;
		aux->valor = valor;
		
		// E atualizamos a antiga cabe�a (vari�vel P) para apontar
		// a este novo elemento (vari�vel AUX)
		p = aux;
	}
	
	// Inser��o no meio ou no fim da lista
	else {
		
		int j = 1;
		struct conteudo *aux = p;
		
		// Percorro a lista usando a vari�vel aux enquanto:
		// 1. (j < index) n�o encontrar a posi��o que preciso inserir
		// 2. (aux != NULL) n�o cheguei no fim da lista
		while (j < index && aux != NULL) {
			
			aux = aux->prox;
			j++;
		}
		
		// Quando sair do while, usamos essa condi��o para determinar
		// se encontramos a posi��o a ser inserida ou n�o
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
		// pois n�o temos elementos para remover
	}
	
	// Quando o INDEX � zero, devemos remover a cabe�a da lista
	else if (index == 0) {
		
		// Armazenamos a cabe�a atual (vari�vel P) em uma vari�vel
		// auxiliar AUX
		struct conteudo *aux = p;
		
		// Mudamos a cabe�a da lista para apontar ao segundo elemento
		p = p->prox;
		
		// Como o AUX estava referenciando a cabe�a que quer�amos
		// remover, basta chamar a fun��o FREE
		free(aux);
	}
	
	// Remo��o no meio ou no final da lista
	else {
		
		int j = 1;
		struct conteudo *aux = p;
		
		// Percorro a lista usando a vari�vel aux enquanto:
		// 1. (j < index) n�o encontrar a posi��o que preciso remover
		// 2. (aux != NULL) n�o cheguei no fim da lista
		while (j < index && aux != NULL) {
			aux = aux->prox;
			j++;
		}
		
		// Quando sair do while, usamos essa condi��o para determinar
		// se encontramos a posi��o a ser inserida ou n�o
		if (j == index) {
			struct conteudo *aux2 = aux->prox;
			aux->prox = aux2->prox;
			free(aux2);
		}
		
	}
		
}

void imprimir() {
	
	printf("\n imprimir: ");
	
	// Copio o endere�o da cabe�a da lista em 
	// na vari�vel AUX
	struct conteudo *aux = p;
	
	// Enquanto houver elementos na lista
	while (aux != NULL) {
		
		// Imprimo o valor daquele elemento
		printf(" %c ", aux->valor);
		
		// Mudo AUX para apontar para o pr�ximo elemento
		aux = aux->prox;
	}
	
}

int pesquisar(char valor) {
		
	// Inicia-se a vari�vel INDEX em 0
	// ela faz a contagem do �ndice a 
	// ser retornado neste m�todo
	int index = 0;
	
	// Copio o endere�o da cabe�a da lista em 
	// na vari�vel AUX
	// Essa vari�vel � utilizada para navegar
	// pela lista
	struct conteudo *aux = p;
	
	// Enquanto AUX for diferente de nulo
	// significa que n�o chegamos ao final
	// da lista
	while(aux != NULL) {
		
		// Comparo o valor recebido como par�metro
		// com o valor do elemento AUX
		// Se forem iguais, achei o elemento que procurava
		// e s� � necess�rio retornar o INDEX
		if (valor == aux->valor)  {
			return index;
		} 
		
		// Se n�o encontrei o elemento que procurava,
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
