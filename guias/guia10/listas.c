#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "utillist.h"
#include "listas.h"
#define BLOQUE 20

// struct node {
// 	int head;
// 	struct node * tail;
// };
//
//
// typedef struct node node;
// typedef node * TList ;
typedef TNode node;

int belongs(const TList l, int n);
unsigned int size(const TList l);
TList create(int head, node * tail);
int is_empty(TList l);
int belongs(const TList l, int n);
TList delete(TList l, int num);
void print_TList(TList l);
TList insert(TList l, int num);
TList delete(TList l, int num);
// void freeList(TList l);
int head(TList l);
TList tail(TList l);
int * toArray(const TList l);


TList
create(int head, node * tail)
{
	node *  ans = malloc(sizeof(node));
	ans->head = head;
	ans->tail = tail;
	return ans;	
}

unsigned int
size(const TList l)
{
	if (is_empty(l)) {
		return 0;
	}
	return  1 + size(l->tail);
}

void
print_TList(TList l)
{
	if (l == NULL) {
		return;
	}
	printf("head: %d,     tail: %p\n", l->head, (void *)l->tail);
	print_TList(l->tail);
}

void
print_for(TList l)
{
	for (TList aux = l; aux != NULL; aux = aux->tail) {
		printf("%d\n", aux->head);
	}
}

TList
insert(TList l, int num)
{
	if (l == NULL || l->head > num) {
		TList new_node = malloc(sizeof(*new_node));
		new_node->head = num;
		new_node->tail = l;
		return new_node;
	}
	if (l->head == num) {
		// si ya lo tengo no hago nada
		return l;
	}
	// queda el caso en el que num > l-> head
	// cambia la sub TLista pero la TLista no cambia
	l->tail = insert(l->tail, num);
	return l;
}

TList
delete(TList l, int num) {
	// cb final de lista o el elemento es mas chico y en una lista ordenada
	// no lo voy a encontrar a el numero
	if (l->tail == NULL || l->head > num) {
		return l;
	}
	if (l->head == num)
	{
		TList aux = l->tail;
		free(l);
		return aux;
	}
	else {
		l->tail = delete(l->tail, num);
	}
	return l;
}

int
is_empty(TList l)
{
	// si la TLista no apunta a nada entones está vacía
	return l == NULL;
}

int
belongs(const TList l, int n)
{
	if (is_empty(l) || l->head > n) {
		return 0;
	}
	else if (l->head == n) {
		return 1;
	}
	else {
		return belongs(l->tail, n);
	}
}

// void
// freeList(TList l) {
// 	if (l == NULL) {
// 		return;
// 	}
// 	freeList(l->tail);
// 	free(l);
// }

int
head(TList l)
{
	assert(!is_empty(l));
	return l->head;
}

TList
tail(TList l)
{
	assert(!is_empty(l));
	return l->tail;
}

int * toArray(const TList l)
{
	int * ans = NULL, i = 0;
	for (TList aux = l ; aux != NULL ; aux = aux->tail, i++) {
		if (i % BLOQUE == 0) {
			ans = realloc(ans, sizeof(int) * (i + BLOQUE));
		}
		ans[i] = aux->head;
	}
	ans = realloc(ans, sizeof(int) * i);
	return ans;
}
