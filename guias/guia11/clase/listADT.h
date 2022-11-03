#ifndef LISTADT_LISTADT_H
#define LISTADT_LISTADT_H
// Listas con header
typedef struct listCDT * listADT;

// Tipo de elemento de la lista
typedef int elemType;

listADT newList(int (*f) (elemType e1, elemType e2));

void freeList(listADT list);

int size(const listADT list);

/**
 *
 * @param list
 * @param elem
 * @return 1 si elem pertenece a la lista
 */
int belongs(const listADT list, elemType elem);

/**
 *
 * @param list
 * @param elem
 * @return la posición que ocupa elem en la lista,o -1 si no está en la lista
 */
int indexOf(const listADT list, elemType elem);

/**
 * Si idx es una posición afuera de la lista, aborta la ejecución
 * @param list
 * @param idx
 * @return el elemento que está en la posición idx, siendo 0 la primer posición
 */
elemType get(const listADT list, unsigned int idx);

// 1 si lo agrego 0 sino
int add(listADT, elemType);

void to_begin(listADT list);

int has_next(const listADT list);

elemType next(listADT list);

void map(listADT list, elemType (*f) (elemType));

// Funciones para agregar, eliminar, recorrer la lista

#endif //LISTADT_LISTADT_H
