#include <stdio.h>
#include <assert.h>
#include "utillist.h"
#include <stdlib.h>
#include "listas.h"


TList listUnion  (const TList list1, const TList list2);


int main(void) {

  int v[] = {1, 4, 5, 6, 7, 8};
  int w[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x[] = {2, 3, 9};

  TList l1 = fromArray(v, 6);
  TList l2 = fromArray(w, 9);
  TList l3 = listUnion(l1, l2);
  assert(checkElems(l3, w, 9));
  freeList(l3);

  l3 = listUnion(l2, l1);
  print_TList(l3);
  assert(checkElems(l3, w, 9));
  freeList(l3);

  l3 = listUnion(l2, l2);
  assert(checkElems(l3, w, 9));
  freeList(l3);

  l3 = listUnion(l2, NULL);
  assert(checkElems(l3, w, 9));
  freeList(l3);

  l3 = listUnion(NULL, l2);
  assert(checkElems(l3, w, 9));
  freeList(l3);
  freeList(l1);
  freeList(l2);
  
  l1 = fromArray(v, 6);
  l2 = fromArray(x, 3);
  l3 = listUnion(l1, l2);
  freeList(l1);
  freeList(l2);
  assert(checkElems(l3, w, 9));
  freeList(l3);


  printf ("OK!\n");
  return 0;
}

TList listUnion  (const TList list1, const TList list2)
{
	if (list1 == NULL && list2 == NULL) {
		return NULL;
	}
	if (list1 == NULL) {
		// caso en el que me encuentro en el final de la lista1, copio todo lo de la lista 2 y termino
		TList aux = malloc(sizeof(*aux));
		aux->head = list2->head;
		aux->tail = listUnion(list1, list2->tail);
		return aux;
	}
	if (list2 == NULL) {
		TList aux = malloc(sizeof(*aux));
		aux->head = list1->head;
		aux->tail = listUnion(list1->tail, list2);
		return aux;
	}

	// ahora tricotomía
	if(list1->head > list2->head) {
		TList aux = malloc(sizeof(*aux));
		aux->head = list2->head;
		aux->tail = listUnion(list1, list2->tail);
		return aux;
	}
	else if (list1->head < list2->head) {
		TList aux = malloc(sizeof(*aux));
		aux->head = list1->head;
		aux->tail = listUnion(list1->tail, list2);
		return aux;
	}
	else {
		TList aux = malloc(sizeof(*aux));
		aux->head = list1->head;
		aux->tail = listUnion(list1->tail, list2->tail);
		return aux;
	}
}
