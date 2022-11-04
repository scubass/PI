#include "matrizADT.h"
#include <stdlib.h>
#include <assert.h>

typedef struct TCol {
	unsigned long col;
	struct TCol * tail;
} TCol;

typedef struct TRow{
	unsigned long row;
	struct TRow * tail;
	struct TCol * firstCol;
} TRow;

struct matrizCDT {
	TRow * first;	
};

static void free_row(TRow * r);
static void free_col(TCol * col);
static TRow * deleteRow(TRow * first, unsigned long row, unsigned long col);
static TCol * deleteCol(TCol * first, unsigned long col);
static TRow * setFalseRow(TRow * first, unsigned long row, unsigned long col);
static TCol * setFalseCol(TCol * first, unsigned long col);



matrizADT newMatrix() {
	return calloc(1, sizeof(struct matrizCDT));
}

void freeMAtrix(matrizADT m) {
	free_row(m->first);
	free(m);
}

static void free_row(TRow * r) {
	if (r == NULL) {
		return;
	}
	free_row(r->tail);
	free_col(r->firstCol);
	free(r);
}
static void free_col(TCol * col) {
	if (col == NULL) {
		return;
	}
	free_col(col->tail);
	free(col);
}

void setTrue(matrizADT m, unsigned long row, unsigned long col) {
	m->first = deleteRow(m->first, row, col); 
}

static TRow * deleteRow(TRow * first, unsigned long row, unsigned long col) {
	if (first == NULL || first->row > row) {
		return first;
	}

	if (first->row == row) {
		first->firstCol = deleteCol(first->firstCol, col);
		if (first->firstCol == NULL) {
			TRow * aux = first->tail;
			free(first);
			return aux;
		}
	}
	first->tail = deleteRow(first->tail, row, col);
	return first;
}

static struct TCol * deleteCol(TCol * first, unsigned long col) {
	if (first == NULL || first->col	> col) {
		return first;
	}
	if (first->col == col) {
		TCol * aux = first->tail;
		free(first);
		return aux;
	}
	first->tail = deleteCol(first->tail, col);
	return first;
}

void setFalse(matrizADT m, unsigned long row, unsigned long col) {
	m->first = setFalseRow(m->first, row, col);
}

static TRow * setFalseRow(TRow * first, unsigned long row, unsigned long col) {
	if (first == NULL || first->row > row) {
		TRow * aux = calloc(1, sizeof(TRow));
		aux->row = row;
		aux->firstCol = setFalseCol(aux->firstCol, col);
		return aux;
	}
	else if (first->row == row) {
		first->firstCol = setFalseCol(first->firstCol, col);
	}
	else {
		TRow * aux = calloc(1, sizeof(TRow));
		aux->row = row;
		aux->firstCol = setFalseCol(aux->firstCol, col);
		aux->tail = setFalseRow(aux, row, col);
		return aux;
	}
	first->tail = setFalseRow(first->tail, row, col);
	return first;
}
static TCol * setFalseCol(TCol * first, unsigned long col) {
	if (first == NULL || first->col > col) {
		TCol * aux = malloc(sizeof(TCol));
		aux->col = col;
		aux->tail = first;
		return aux;
	}
	if (first->col < col) {
		TCol * aux = malloc(sizeof(TCol));
		aux->col = col;
		aux->tail = setFalseCol(aux, col);
		return aux;
	}
	setFalseCol(first->tail, col);
	return first;
}

int get(const matrizADT, unsigned long row, unsigned long col);
