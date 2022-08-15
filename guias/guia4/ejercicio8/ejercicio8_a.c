#include <stdio.h>
void f1();
void f2();

int
main(void)
{
	f1();
	f2();
	return 0;
}

void
f1 () {
	printf("dentro de f1\n");
}

void
 f2 (void) {
 	printf("dentro de f2\n");
 }

// error definir una función adentro de otra, no se puede
