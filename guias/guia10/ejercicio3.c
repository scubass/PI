#include <stdio.h>
#include <stdlib.h>
#include "listas.h"
#include "utillist.h"


//idea caso base tengo 2 elemeentos y llego al final entonces corto, luego comparo dos elemenetos y si el que estoy es mayor a el siguiente, elimino el siguiente, ejemplo
// v = {1, 2, 3, 12, 4};
// elimino el 4 final
// para esto tengo que comparar 2 elementos de la lista
void
order(TList l)
{
	if (l == NULL || l->tail == NULL) {
		return;
	}
	if (l->head >= (l->tail)->head) {
		l->tail = delete(l->tail, (l->tail)->head);
		order(l);
	}
	else {
		order(l->tail);
	}
}

int main(void) {

  int v[] = {1,1,2,1,0,-1,3,3,3,3,3,10,9,100,100,998};
  int dimV = sizeof(v)/sizeof(v[0]);
  TList list = fromArray(v, dimV);
  
  order(list);
  printf("hola\n");
  int o[] = {1,2,3,10,100,998};
  assert(checkElems(list, o, sizeof(o)/sizeof(o[0]))==1);

  order(list);
  assert(checkElems(list, o, sizeof(o)/sizeof(o[0]))==1);
  freeList(list);
  printf("hola por segunda vez\n");
 
  TList empty = NULL;
  order(empty);
  assert(empty ==NULL);
  printf("hola por tercera vez\n");

  list = fromArray(v,1);
  order(list);
  assert(list->head ==1 && list->tail == NULL);
  freeList(list);
  printf("hola por cuarta vez\n");

  // int w[] = {1,1,1,1,1,1,1,1,1,1};
  // list = fromArray(w, sizeof(w)/sizeof(w[0]));
  // order(list);
  // assert(list->head ==1 && list->tail == NULL);
  // freeList(list);
  // printf("hola por quinta vez\n");

  printf ("OK!\n");
  return 0;
}
