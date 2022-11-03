#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define BLOQUE 20

struct node {
	int head;
	struct node * tail;
};

typedef struct node node;
typedef node * list ;

int belongs(const list l, int n);
unsigned int size(const list l);
list create(int head, node * tail);
int is_empty(list l);
int belongs(const list l, int n);

list
create(int head, node * tail)
{
	node *  ans = malloc(sizeof(node));
	ans->head = head;
	ans->tail = tail;
	return ans;	
}

unsigned int
size(const list l)
{
	if (is_empty(l)) {
		return 0;
	}
	return  1 + size(l->tail);
}

void
print_list(list l)
{
	if (l == NULL) {
		return;
	}
	printf("%d\n", l->head);
	print_list(l->tail);
}

void
print_for(list l)
{
	for (list aux = l; aux != NULL; aux = aux->tail) {
		printf("%d\n", aux->head);
	}
}

list
insert(list l, int num)
{
	if (l == NULL || l->head > num) {
		list new_node = malloc(sizeof(list));
		new_node->head = num;
		new_node->tail = NULL;
		return new_node;
	}
	if (l->head == num) {
		// si ya lo tengo no hago nada
		return l;
	}
	// queda el caso en el que num > l-> head
	// cambia la sub lista pero la lista no cambia
	l->tail = insert(l->tail, num);
	return l;
}

list
delete(list l, int num) {
	if (!belongs(l, num)) {
		return l;
	}
	// si encuentro el numeor tengo que hacer que el anterior apunte al siguiente y 
	else if (l->head == num ) {
		list tail = l->tail;
		free(l);
		return tail;
	}
	delete(l->tail, num);
	return l;
}

int
is_empty(list l)
{
	// si la lista no apunta a nada entones está vacía
	return l == NULL;
}

int
belongs(const list l, int n)
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

void
freeList(list l) {
	if (l == NULL) {
		return;
	}
	freeList(l->tail);
	free(l);
}

int
head(list l)
{
	assert(!is_empty(l));
	return l->head;
}

list
tail(list l)
{
	assert(!is_empty(l));
	return l->tail;
}

int * toArray(const list l)
{
	int * ans = NULL, i = 0;
	for (list aux = l ; aux != NULL ; aux = aux->tail, i++) {
		if (i % BLOQUE == 0) {
			ans = realloc(ans, sizeof(int) * (i + BLOQUE));
		}
		ans[i] = aux->head;
	}
	ans = realloc(ans, sizeof(int) * i);
	return ans;
}

int
main(void)
{
	list l =  NULL;
	l = insert(l, 10);
	assert(is_empty(l) != 1);
	printf("head: %d, tail: %p\n", l->head, (void *)l->tail);
	// l = delete(l, 10);
	free(l);
	// assert(is_empty(l));
	list l1 = NULL;
	l1 = insert(l1, 10);
	l1 = insert(l1, 20);
	assert(is_empty(l1) != 1);
	print_list(l1);
	freeList(l1);
	// assert(is_empty(l1) == 1);
	puts("Ok");
	return 0;
}
