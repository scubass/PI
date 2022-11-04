
//
// Created on 26/10/2022.
// Stack de enteros, sin capacidad máxima
//

#ifndef VECTORADT_VECTORADT_H
#define VECTORADT_VECTORADT_H

#include <stddef.h>
#include <stdio.h>
typedef struct arrayCDT * arrayADT;

typedef int elemType;
typedef int (*compare) (elemType e1, elemType e2);
arrayADT new_array(compare cmp);

void put(arrayADT v, size_t idx, elemType elem);

void put_if_not_present(arrayADT v, size_t idx, elemType elem);

void free_array(arrayADT v);

size_t size(const arrayADT v);

void remove(arrayADT v, size_t idx);

elemType * get(arrayADT v, size_t idx);

#endif //VECTORADT_VECTORADT_H
