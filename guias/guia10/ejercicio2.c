#include <stdio.h>
#include <stdlib.h>
#include "listas.h"
#include "utillist.h"
void ptr_reverse(char * s);

TList
get(TList l, int elem)
{
	if (l == NULL || elem < l->head) {
		return NULL;
	}
	if (l->head == elem) {
		return l;
	}
	return get(l->tail, elem);
}

int
main(void)
{
	TList l = NULL;
	l = insert(l, 29);
	l = insert(l, 10);
	TList aux = get(l, 10);
	printf("Hola\n");
	print_TList(aux);
	freeList(aux);
	ptr_reverse("hola");
	return 0;
}

void
ptr_reverse(char * s)
{
	if (*s== 0) {
		return;
	}
	char c = *s;
	ptr_reverse(s + 1);
	printf("%c", c);
}
