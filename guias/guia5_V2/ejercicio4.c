#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "../getnum.h"

#define SWAP(x, y) x ^= y ^= x
int rand_range(int, int);

int
main(void) 
{
	srand(time(NULL));
	int left = getint("Ingrese el valor izquierdo: ");	
	int right = getint("Ingrese el valor derecho: ");	
	printf("%d\n", rand_range(left, right));
	return 0;
}

int
rand_range(int left, int right)
{
	if ( left > right) {SWAP(left, right);}
	return (rand() % (right - left + 1) + left);
}
