#include "setADT.h"
#include <stdlib.h>

typedef struct node {
	elemType elem;
	struct node * tail;
} node;

typedef struct setCDT {
	size_t size;
	compare cmp;
	node * first;
} setCDT;

static int setContainsRec(node * list, elemType e, compare cmp);
static void freeRec(node * list);
static node * intersectionRec(node * list1, node * list2, setADT aux);
static node * deleteRec(node * list, elemType e, setADT set);
static node * unionRec(node * list1, node * list2, setADT ans);
static node * diffRec(node * list1, node * list2, setADT ans);
node * addElementRec(node * list, elemType e, setADT set);

setADT newSet(compare cmp) {
	setADT ans = calloc(1, sizeof(setCDT));
	ans->cmp = cmp;
	return ans;
}

size_t sizeSet(setADT set) {
	if (set == NULL) {
		exit(1);
	}
	return set->size;
}

int setContains(setADT set, elemType e) {
	return setContainsRec(set->first, e, set->cmp);
}

static int setContainsRec(node * list, elemType e, compare cmp) {
	int c;
	if (list == NULL || (c = cmp(list->elem, e)) > 0) {
		return 0;
	}
	if (c < 0) {
		return setContainsRec(list->tail, e, cmp);
	}
	return 1;
}

void freeSet(setADT set) {
	if (set == NULL) {
		return;
	}
	freeRec(set->first);
	free(set);
}

static void freeRec(node * list) { 
	if (list == NULL) {
		return;
	}	
	free(list->tail);
	free(list);
}

int addElement(setADT set, elemType e) {
	int aux = set->size;
	set->first = addElementRec(set->first, e, set);
	aux -= set->size;
	return aux;
}

node * addElementRec(node * list, elemType e, setADT set) {
	int c;
	if (list == NULL || (c = set->cmp(list->elem, e)) > 0) {
		node * aux = malloc(sizeof(node));
		aux->elem = e;
		aux->tail = list;
		set->size++;
		return aux;
	}
	else if (c == 0) {
		return list;		 
	}
	list->tail = addElementRec(list->tail, e, set);
	return list;
}

setADT intersectionSet(setADT set1, setADT set2) {
	setADT aux = calloc(1, sizeof(setCDT));
	aux->cmp = set1->cmp;
	aux->first = intersectionRec(set1->first, set2->first, aux);
	return aux;
}

static node * intersectionRec(node * list1, node * list2, setADT aux) {
	if (list1 == NULL || list2 == NULL) {
		return NULL;
	}
	if (aux->cmp(list1->elem, list2->elem) == 0) {
		node * n = malloc(sizeof(node));
		n->elem = list1->elem;
		aux->size++;
		n->tail = intersectionRec(list1->tail, list2->tail, aux);
		return n;
	}
	
	if (aux->cmp(list1->elem, list2->elem) < 0) {
		return intersectionRec(list1, list2->tail, aux);
	}
	else {
		return intersectionRec(list1->tail, list2, aux);
	}
}

void deleteElement(setADT set, elemType e) {
	set->first = deleteRec(set->first, e, set);
}

static node * deleteRec(node * list, elemType e, setADT set) {
	if (list == NULL || set->cmp(list->elem, e) > 0) {
		return list;
	}
	if (set->cmp(list->elem, e) == 0) {
		node * aux = list->tail;
		free(list);
		set->size--;
		return aux;
	}
	else {
		list->tail = deleteRec(list->tail, e, set);
	}
	return list;
}


setADT unionSet(setADT set1, setADT set2) {
	setADT ans = calloc(1, sizeof(setCDT));
	ans->cmp = set1->cmp;
	ans->first = unionRec(set1->first, set2->first, ans);
	return ans;
}

static node * unionRec(node * list1, node * list2, setADT ans) {
	if (list1 == NULL && list2 == NULL) {
		return NULL;
	}
	if (list1 == NULL || ans->cmp(list1->elem, list2->elem) > 0) {
		node * aux = malloc(sizeof(node));
		aux->elem = list2->elem;
		ans->size++;
		aux->tail = unionRec(list1, list2->tail, ans);
		return aux;
	}
	if(list2 == NULL || ans->cmp(list1->elem, list2->elem) < 0 ) {
		node * aux = malloc(sizeof(node));
		aux->elem = list1->elem;
		ans->size++;
		aux->tail = unionRec(list1->tail, list2, ans);
		return aux;
	}
	else {
		node * aux = malloc(sizeof(node));
		aux->elem = list1->elem;
		ans->size++;
		aux->tail = unionRec(list1->tail, list2->tail, ans);
		return aux;
	}
}

setADT diffSet(setADT set1, setADT set2) {
	setADT ans = calloc(1, sizeof(setCDT));
	ans->cmp = set1->cmp;
	ans->first = diffRec(set1->first, set2->first, ans);
	return ans;
}

static node * diffRec(node * list1, node * list2, setADT ans) {
	if (list1 == NULL) {
		return NULL;
	}
	if (list2 == NULL || ans->cmp(list1->elem, list2->elem) < 0) {
		node * aux = malloc(sizeof(node));
		aux->elem = list1->elem;
		ans->size++;
		aux->tail = diffRec(list1->tail, list2, ans);
		return aux;
	}
	else if (ans->cmp(list1->elem, list2->elem) == 0) {
		return diffRec(list1->tail, list2->tail, ans);
	}
	
	else {
		return diffRec(list1, list2->tail, ans);
	}
}

int isEmptySet(setADT set) {
	return set == NULL || set->size == 0;
}
