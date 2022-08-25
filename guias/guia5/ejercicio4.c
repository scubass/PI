#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>


int random_range(int lower, int upper);

int
main(void)
{
	printf("random number in range (10, 1000): %d\n", random_range(10, 1000));
	int i;
	for (i = 0; i < 1000; i++) {
		assert(random_range(10, 1000) <= 1000);
		assert(random_range(10, 1000) >= 10);
	}
	puts("Todo ok no se pasa de rango");
	return 0;
	
}


int 
random_range(int lower, int upper)
{
	srand(time(0));
	int random_number = (rand() % (upper - lower + 1)) + lower;
	return random_number;
}


// Escribir una función que reciba dos parámetros de entrada de tipo entero y devuelva en su nombre un
// número aleatorio entre ambos números. (En una línea)
