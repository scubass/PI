#include <stdio.h>

int
main(void)
{
	int c = 2;

	c = neg(c);
	printf("%d\n", c);
	printf("%c\n", c);
	return 0;
}
// funciona pero el printf con %c al ser negativo no imprime nada y falta el prototipo de la función
