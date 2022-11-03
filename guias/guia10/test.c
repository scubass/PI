#include <stdio.h>
#include <stdlib.h>
#include "utillist.h"
#include "listas.h"

int es_par(int num);
TList delete_cond(TList l, int (*fn_ptr) (int));

int
main(void)
{
	TList l = NULL;
	const int v[] = {1, 2, 3, 4};
	l = fromArray(v, 4);
	// l = delete(l, 3);
	// l = delete_cond(l, es_par);
	l = delete(l, 3);
	print_TList(l);
	freeList(l);
	return 0;
}

int
es_par(int num)
{
	return num % 2 == 0;
}

// TList
// delete_cond(TList l, int (*fn_ptr) (int))
// {
// 	if (l == NULL )
// 	{
// 		return l;
// 	}
//
// 	if (fn_ptr(l->head) != 0) {
// 		printf("Entro el: %d\n", l->head);
// 		l = delete(l, l->head);
// 	}
// 	l = delete_cond(l->tail, fn_ptr);
// 	return l;
// }
TList
delete_cond(TList l, int (*fn_ptr) (int))
{
	if (l == NULL )
	{
		return l;
	}

	if (fn_ptr(l->head)) {
		TList aux = l->tail;
		free(l);
		return aux;
	}
	l->tail = delete_cond(l->tail, fn_ptr);
	return l;
}
