//
// Created on 26/10/2022.
// Stack de enteros, sin capacidad máxima
//

#ifndef STACKADT_STACKADT_H
#define STACKADT_STACKADT_H

typedef struct stackCDT * stackADT;

stackADT newStack();

void freeStack(stackADT stack);

/**
 *
 * @param stack
 * @return el tope de lapila y lo saca de la misma.
 * Si la pila estaba vacía, aborta la ejecución (exit(1))
 */
int pop(stackADT stack);

/**
 * Agrega elem al tope de la pila
 * @param stack
 * @param elem
 */
void push(stackADT stack, int elem);

/**
 *
 * @param stack
 * @return 1 si la pila está vacía, 0 sinó
 */
int isEmpty(const stackADT stack);

#endif //STACKADT_STACKADT_H
