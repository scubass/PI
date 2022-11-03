#ifndef __listas__h
#define __listas__h
#include "utillist.h"
// struct node {
// 	int head;
// 	struct node * tail;
// };
//
//
// typedef struct node node;
// typedef node * TList ;

int belongs(const TList l, int n);
unsigned int size(const TList l);
TList create(int head, TList tail);
int is_empty(TList l);
int belongs(const TList l, int n);
TList delete(TList l, int num);
void print_TList(TList l);
TList insert(TList l, int num);
// void freeList(TList l);
int head(TList l);
TList tail(TList l);
int * toArray(const TList l);


#endif // DEBUG
