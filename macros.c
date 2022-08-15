#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y) x ^= y ^= x ^= y;
#define SUMA(x, y) x ^= y ^= x ^= y;
#define MAXIMO2(x, y, z) z = (x > y) ? x : y;


int
main(int argc, char *argv[])
{
	int num1 = 10, num2 = 5;
	printf("A = %d, B = %d\n", num1, num2);
	SWAP(num1, num2);
	printf("A = %d, B = %d\n", num1, num2);
	int a = 10, b = 50, c;
	MAXIMO2(a, b, c);
	printf("el mayor entre %d y %d es: %d\n", a, b, c);
	return 0;
}
