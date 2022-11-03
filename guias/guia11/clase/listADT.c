#include "listADT.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	elemType elem;
	struct node * tail;
} node;

struct listCDT {
	size_t size; // cantidad de nodos;
	node * first;
	int (*cmp) (elemType e1, elemType e2);
	node * next;
};
typedef int (*compare) (elemType e1, elemType e2);
static int belongs_rec(node * first, elemType elem, compare cmp);
static node * add_rec(node * list, elemType elem, compare cmp, int * flag);
static void free_rec(node * list);
static node * get_sub_list(node * first, size_t dim);
static void map_rec(node * list, elemType (*f) (elemType));

listADT newList(compare cmp) {
	listADT ans = calloc(1, sizeof(listADT));
	ans->cmp = cmp;
	return ans;
}

int size(const listADT list) {
	return list->size;
}

int belongs(const listADT list, elemType elem) {
	return belongs_rec(list->first, elem, list->cmp);	
}

static int belongs_rec(node * first, elemType elem, compare cmp) {
	int c;
	if (first == NULL || (c = cmp(first->elem, elem)) < 0) {
		return 0;
	}
	if (c == 0) {
		return 1;
	}
	return belongs_rec(first->tail, elem, cmp);
}

int add(listADT list, elemType elem) {
	int flag = 0;
	list->first = add_rec(list->first, elem, list->cmp, &flag);
	list->size += flag;
	return flag;
}

static node *
add_rec(struct node * list, elemType elem, compare cmp, int * flag) {
	int c;
	if (list == NULL || (c = cmp(list->elem, elem)) > 0) {
		struct node * ans = malloc(sizeof(node));
		ans->elem = elem;
		ans->tail = list;
		*flag = 1;
		return ans;
	}	
	if (c < 0) {
		struct node * ans = malloc(sizeof(node));
		ans->elem = elem;
		*flag = 1;
		ans->tail = add_rec(list->tail, elem, cmp, flag);
		return ans;
	}
	return list;
}


void
freeList(listADT list) {
	// primero paso la lista recursiva a la misma función de la guía 10
	// y finalmente libero el espacio reservado para el header
	free_rec(list->first->tail);
	free(list);
	return;
}

static void 
free_rec(node * list) {
	if (list == NULL) {
		return;
	}
	free_rec(list->tail);
	free(list);
}

void 
to_begin(listADT list)
{
	list->next = list->first;
}

int has_next(const listADT list) {
	return list->next != NULL;
}


elemType next(listADT list) {
	if (list->next == NULL) {
		// hacemos un exit pues dado que elemType puede ser varias cosas no se que devolver
		// asi que si no tenemos otro elemento abortamos, sería como acceder a un indice en un vector
		// que es mayor a la dimensión
		fprintf(stderr, "Llamada a la función next con un un elemento vacío\n");
		exit(1);
	}
	elemType aux = list->next->elem;
	list->next = list->next->tail;
	return aux;
	node * aux2 = list->next;
	list->next = list->next->tail;
	return aux2->elem;
}


//devuelve una sub lista con todos los nodos copiados
static node * get_sub_list(node * first, size_t dim) {
	if (first == NULL){ 
		return NULL;
	}
	if (dim == 0) {
		node * aux = malloc(sizeof(node));
		aux->elem = first->elem;
		aux->tail = get_sub_list(first->tail, dim);
		return aux;
	}
	return get_sub_list(first->tail, dim - 1);
}

listADT get_list(const listADT list, unsigned int idx) {
	// si se llama a la función con un indice mayor a la cantidad de elemetos aborta eejecución
	if (list->size < idx) {
		exit(1);
	}
	listADT ans = malloc(sizeof(*ans));
	ans->cmp = list->cmp;
	ans->size = list->size - idx;
	ans->first = get_sub_list(list->first, idx);
	return ans;
}

void map(listADT list, elemType (*f) (elemType)) {
	node * aux = list->first;
	map_rec(aux, f);
}

static void map_rec(node * list, elemType (*f) (elemType)) {
	if (list == NULL) {
		return;
	}
	list->elem = f(list->elem);
	map_rec(list->tail, f);
}
