//formula altura ^ 2 = cantidad de latas por altura, ejemplo 1 4 9 16 25 35 ....#include <stdio.h>
#include <assert.h>
#include <stdio.h>


void piramide(int *latas, int *h);

int main(void) {

  int h=0, latas=10;
  piramide(&latas, &h);
  assert(latas==5 && h==2);

  h=0, latas=55;
  piramide(&latas, &h);
  assert(latas==0 && h==5);

  h=0, latas=1;
  piramide(&latas, &h);
  assert(latas==0 && h==1);

  h=0, latas=2;
  piramide(&latas, &h);
  assert(latas==1 && h==1);

  h=0, latas=3;
  piramide(&latas, &h);
  assert(latas==2 && h==1);

  h=0, latas=4;
  piramide(&latas, &h);
  assert(latas==3 && h==1);

  h=0, latas=5;
  piramide(&latas, &h);
  assert(latas==0 && h==2);

  printf ("OK!\n");
  return 0;
}

void
piramide(int * latas, int * h)
{
	int aux = (*h + 1) * (*h + 1);
	if (*latas < aux) {
		return;
	}
	*h += 1;
	*latas -= aux;
	piramide(latas, h);
}
