#ifndef MATRIZADT_MATRIZADT_H
#define MATRIZADT_MATRIZADT_H

typedef struct matrizCDT * matrizADT;

matrizADT newMatrix();
void freeMAtrix(matrizADT m);
void setTrue(matrizADT m, unsigned long row, unsigned long col);
void setFalse(matrizADT m, unsigned long row, unsigned long col);
int get(const matrizADT, unsigned long row, unsigned long col);


#endif // MATRIZADT_MATRIZADT_H
