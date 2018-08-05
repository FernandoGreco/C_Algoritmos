#include <stdio.h>
#include <stdlib.h>

struct conteudo {
	int valor;
};

struct lista {
	struct conteudo conteudo;
	struct lista *prox;
};

int empty(struct lista *l) {
	if (l == NULL) {
		return 1;
	}
	return 0;
}

int size(struct lista *l) {
	int i = 0;
	
	while (l != NULL) {
		i++;
		l = l->prox;
	}
	
	return i;
}

struct lista* head(struct lista *l) {
	if (l == NULL) {
		return NULL;
	}
	
	return l;
}

struct lista* tail(struct lista *l) {
	if (l == NULL) {
		return NULL;
	}
		
	while (l->prox != NULL) {
		l = l->prox;
	}
	
	return l;
}

struct lista* next(struct lista *cursor) {
	if (cursor == NULL) {
		printf("Elemento nulo");
		exit(1);
	}
	
	return cursor->prox;
}

struct conteudo info(struct lista *cursor) {
	if (cursor == NULL) {
		printf("Elemento nulo");
		exit(1);
	}
	
	return cursor->conteudo;
}

void imprimir(struct lista *l) {
	printf("\n Lista (tamanho %d): ", size(l));
	while (l != NULL) {
		printf(" %d ", info(l).valor);
		l = l->prox;
	}
}

struct lista* alloc(struct conteudo c) {
	struct lista *l = (struct lista*)malloc(sizeof(struct lista));
	
	if (l == NULL) {
		printf ("Erro de alocacao de memoria!");
		exit(1);
	}
	
	l->prox = NULL;
	l->conteudo = c;
	return l;
}

void _insert(struct lista **l, struct lista **cursor, struct conteudo c) {
	
	// Lista sem elementos
	if (empty(*l)) {
		*l = alloc(c);
		
		if (cursor != NULL) {
			*cursor = *l;
		}
		
		return;
	}
	
	// Inserir na cauda da lista
	if (cursor == NULL) {
		tail(*l)->prox = alloc(c);
		return;
	}
	
	// Inserção na cabeça da lista
	if (*l == *cursor) {
		*cursor = alloc(c);
		(*cursor)->prox = *l;
		*l = *cursor;
		return;
	}
	
	// Determine o elemento anterior ao cursor
	struct lista *aux = *l;
	while(aux->prox != *cursor) {
		aux = aux->prox;
	}
	
	// Inserir no meio da lista
	aux->prox = alloc(c);
	aux->prox->prox = *cursor;
	*cursor = aux->prox;
	return;
}

void _delete(struct lista **l, struct lista **cursor) {
	if (*cursor == NULL) {
		printf("Elemento nulo");
		exit(1);
	}
	
	if (empty(*l)) {
		printf("Lista vazia");
		exit(1);
	}
	
	// Removendo o primeiro elemento da lista
	// ou talvez o único elemento da lista
	if (*l == *cursor) {
		*l = (*l)->prox;
		free(*cursor);
		*cursor = *l;
		return;
	}
	
	// Determine o elemento anterior ao cursor
	struct lista *aux = *l;
	while(aux->prox != *cursor) {
		aux = aux->prox;
	
		// O cursor não está na lista
		if (aux == NULL) {
			printf("Elemento nao encontrado");
			exit(1);
		}
	}
	
	// Removendo um elemento intermediário (ou o último)
	aux->prox = (*cursor)->prox;
	free(*cursor);
	*cursor = aux;
}

void add(struct lista **l, struct conteudo c) {
	_insert(l, NULL, c);
}

int main(void) {
	
	struct conteudo c;
	
	struct lista *cursor = NULL;
	struct lista *head = NULL;
	
	imprimir(head);
		
	c.valor = 1;
	add(&head, c);
	printf("\n\n Add 1");
	imprimir(head);
		
	c.valor = 3;
	add(&head, c);
	printf("\n\n Add 3");
	imprimir(head);
		
	c.valor = 2;
	cursor = next(head);
	_insert(&head, &cursor, c);
	printf("\n\n Insert 2 no next da cabeca");
	imprimir(head);
		
	c.valor = 0;
	cursor = head;
	_insert(&head, &cursor, c);
	printf("\n\n Insert 0 na cabeca");
	imprimir(head);
		
	cursor = head;
	_delete(&head, &cursor);
	printf("\n\n Delete da cabeca");
	imprimir(head);
		
	cursor = next(next(head));
	_delete(&head, &cursor);
	printf("\n\n Delete do next next da cabeca");
	imprimir(head);
	
	c.valor = 3;
	add(&head, c);
	printf("\n\n Add 3");
	imprimir(head);
}
