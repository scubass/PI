#include "vectorADT.h"
#include <stddef.h>
#include <stdlib.h>

typedef struct node {
	elemType elem;
	char is_used; // 1 si está presente y 0 sino
} node;

struct arrayCDT {
	node * vec;
	size_t dim; // cantidad de elementos
	size_t size; // cantidad de elementos reservados
};

arrayADT new_array() {
	return calloc(1, sizeof(struct arrayCDT));
}

void free_array(arrayADT v) {
	free(v->vec); // libero el vector dinámico
	free(v); // libero el header
}


void put(arrayADT v, size_t idx, elemType elem) {
	if (idx >= v->size) {
		v->vec = realloc(v, sizeof(struct node) * (idx + 1));
		for (int i = v->size; i <= idx; i++) {
			v->vec[i].is_used = 0;
		}
		v->size = idx + 1;
	}
	// ahora guardamos el elemento y vamos a chequear si hay que aumentar dim
	// solo aumento si no pise un elemento
	v->vec[idx - 1].elem = elem;
	if (!v->vec[idx].is_used) {
		v->vec[idx - 1].is_used = 1;
		v->dim++;
	}
}

void put_if_not_present(arrayADT v, size_t idx, elemType elem) {
	if (idx >= v->size || v->vec[idx].is_used == 0) {
		put(v, idx, elem);
	}
}

elemType * get(arrayADT v, size_t idx) {
	if (idx >= v->size || v->vec[idx].is_used == 0) {
		return NULL;
	}
	// creo una copia y hago return de la misma
	elemType * ans = malloc(sizeof(elemType));
	*ans = v->vec[idx].elem;
	return ans;
}

void remove(arrayADT v, size_t idx)	 {
	if (v->size >= idx) {
		return;
	}

	if (v->vec[idx].is_used == 1) {
		v->vec[idx].is_used = 0;
		v->dim--;
	}
}
