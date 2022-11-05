#ifndef SETADT_H
#define SETADT_H

#include <stddef.h>
typedef const char * elemType;
typedef struct setCDT * setADT;
typedef int (*compare) (elemType e1, elemType e2);

setADT newSet(compare cmp);
size_t sizeSet(setADT set);
int setContains(setADT set, elemType e);
void freeSet(setADT set);
int addElement(setADT set, elemType e);
setADT intersectionSet(setADT set1, setADT set2);
void deleteElement(setADT set1, elemType e);
setADT unionSet(setADT set1, setADT set2);
setADT diffSet(setADT set1, setADT set2);
int isEmptySet(setADT set);
#endif // SETADT_H
