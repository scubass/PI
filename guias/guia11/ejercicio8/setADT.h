#ifndef SETADT_AETADT_H
#define SETADT_AETADT_H

#include <stddef.h>
typedef char *elemType;
typedef struct setCDT *setADT;
typedef int (*compare)(elemType e1, elemType e2);

setADT newSet(compare);
void deleteElement(setADT set, elemType elem);
int addElement(setADT, elemType elem);
int setContains(setADT set, elemType elem);
size_t sizeSet(setADT set);
void freeSet(setADT set);
setADT unionSet(setADT set1, setADT set2);
int isEmptySet(setADT set);
setADT intersectionSet(setADT set1, setADT set2);
setADT diffSet(setADT set1, setADT set2);
#endif // SETADT_AETADT_H
