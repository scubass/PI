#include <stdio.h>
#include "getnum.h"

int
main(void)
{
	int num = getint("Ingrese un número: ");
	printf("%d\n", num);
	return 0;
}
