#include <stdio.h>
#define MAXIMO2(x, y, z) (z = (x > y) ? x : x);
#define MAXIMO3(x, y, z) (z > MAXIMO2(x, y, z)) ? z : MAXIMO2(x, y, z);



int
main(void)
{
	int a = 1, b = 2, c = 3;
	printf("%d\n", MAXIMO3(a, b, c));
}
