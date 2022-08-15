#include <stdio.h>
#define SWAP(x, y) x ^= y ^= x ^= y;

int
main(void)
{
	int a = 10, b = 13;
	printf("a = %d, b = %d\n", a, b);
	SWAP(a, b);
	printf("a = %d, b = %d\n", a, b);
}
