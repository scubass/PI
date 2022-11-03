//
// Created  on 26/10/2022.
//

#include "stackADT.h"
#include <stdlib.h>

#define BLOCK 10

typedef struct stackCDT {
    int * vec;          // los elementos de la pila
    unsigned int dim;   // cantidad de elementos
    unsigned int size;  // cantidad de elementos reservados
} stackCDT;

stackADT newStack() {
    return calloc(1, sizeof(stackCDT) );
}

int isEmpty(const stackADT stack) {
    return stack->dim == 0;
}

void freeStack(stackADT stack) {
    free(stack->vec);
    free(stack);
}

void push(stackADT stack, int elem) {
    // Si no hay espacio, agrandar el vector
    if(stack->dim == stack->size) {
        stack->vec = realloc(stack->vec,
                             sizeof(stack->vec[0]) * (stack->dim + BLOCK));
        stack->size += BLOCK;
    }
    // O había lugar, o se agrandó el vector
    stack->vec[stack->dim++] = elem;
}


int
pop(stackADT stack)
{
	if (isEmpty(stack)) {
		exit(1);
	}

	int ans = stack->vec[stack->dim - 1];
	stack->dim--;
	return ans;
}
