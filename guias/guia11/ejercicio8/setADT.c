#include <stddef.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "setADT.h" 

// uso listas con header por el size
typedef struct setCDT {
	struct node * first;
	struct node * last;
	size_t size;
	compare cmp;
} setCDT;

typedef struct node {
	elemType head;
	struct node * tail;
} node;

static void free_rec(node * list); 


setADT newSet(compare cmp) {
	setADT ans = calloc(1, sizeof(setCDT));
	ans->cmp = cmp; 
	return ans;
}

int addElement(setADT set, elemType elem) {
	node * aux = set->first;
	int condition = setContains(set, elem);
	// si condition es 1 entonces ya lo tengo y no lo tengo que agregar
	if (!condition) {
		node * aux_item = calloc(1, sizeof(node));
		aux_item->head = elem;
		if (set->first == NULL) {
			set->first = aux_item;
			set->size++;
		}
		else {
			node * aux_node = set->first;
			for (; aux_node != NULL; aux_node = aux->tail) {
				;
			} 
			aux_node->tail = aux_item;
			set->last = aux_node;
		}
	}
	return condition;
}

int setContains(setADT set, elemType elem) {
	node * aux = set->first;
	int condition = 0;
	for ( ; aux != NULL && condition != 1; aux = aux->tail) {
		if (set->cmp(aux->head, elem) == 0) {
			condition = 1;
		}
	}
	return condition;
}


setADT unionSet(setADT set1, setADT set2) {
	node * aux_set1 = set1->first, * aux_set2 = set2->first;
	setADT ans = newSet(set1->cmp);
	for ( ; aux_set1 != NULL || aux_set2 != NULL; aux_set1 = aux_set1->tail, aux_set2 = aux_set2->tail) {
		if (!setContains(ans, aux_set1->head)) {
			int condition = addElement(ans, aux_set1->head);
		}
		if (!setContains(ans, aux_set2->head)) {
			int condition = addElement(ans, aux_set2->head);
		}
	}
	if (aux_set1 == NULL) {
		for (; aux_set2 != NULL ; aux_set2 = aux_set2->tail) {
			if (!setContains(ans, aux_set1->head)) {
				int condition = addElement(ans, aux_set1->head);
			}
		}
	}
	if (aux_set2 == NULL) {
		for (; aux_set1 != NULL ; aux_set1 = aux_set1->tail) {
			if (!setContains(ans, aux_set1->head)) {
				int condition = addElement(ans, aux_set1->head);
			}
		}
	}
	return ans;
}

void freeSet(setADT set) {
	free_rec(set->first);
	free(set);
	return;
}

static void free_rec(node * list) {
	if (list == NULL) {
		return;
	}
	free_rec(list->tail);
	free(list);
}


size_t sizeSet(setADT set) {
	return set->size;
}


void deleteElement(setADT set, elemType elem) {
	node * aux = set->first;
	node * prev = NULL;
	int condition = 0;
	for (; aux != NULL && condition != 1; aux = aux->tail) {
		if (set->cmp(aux->head, elem)) {
			condition = 1;
			if (prev != NULL) {
				prev->tail = aux->tail;
				free(aux);
			}
			else {
				free(aux);
			}
		}
		else {
			prev = aux;
		}
	}
}


int isEmptySet(setADT set) {
	return set == NULL;
}


// itero hasta llegar a el final de una lista o hasta que los elementos que ya vi sean mayores a el size de la otra
setADT intersectionSet(setADT set1, setADT set2) {
	node * aux = set1->first;
	setADT ans = newSet(set1->cmp);
	int aux_size = set2->size;
	for (int i = 0; i < aux_size && aux != NULL; aux = aux->tail) {
		if (setContains(set2, aux->head)) {
			int condition = addElement(ans, aux->head);
			i++;
		}
	}
	return ans;
}


setADT diffSet(setADT set1, setADT set2) {
	setADT ans = newSet(set1->cmp);
	node * aux = set1->first;
	for ( ; aux != NULL ; aux = aux->tail) {
		if (!setContains(set2, aux->head)) {
			int condition = addElement(ans, aux->head);
		}
	}
	return ans;
}






