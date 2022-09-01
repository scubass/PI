#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SWAP(x, y, t) {t aux; aux = x; x = y; y = aux;}

int random_range(int left, int right);
int shuffle_array(int arr[], int dim);

int
main (void)
{
	srand(time(0));
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	shuffle_array(arr, 10);
	for (int i = 0; i < 10 ; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
	return 0;
}

int 
shuffle_array(int arr[], int dim) 
{
	// int new_array[dim];
	int i, random;
	for (i = 0; i < dim; i++) {
		random = random_range(0, dim - 1);
		SWAP(arr[i], arr[random], int)
	}

	return 0;

}

int
random_range(int left, int right)
{
	if (right < left) {
		SWAP(right, left, int);
	}

	return (rand() % (right - left + 1)) + left; 
}

// Dado un arreglo ordenado ascendentemente se pide escribir una función que reciba como parámetro de
// entrada/salida el arreglo y como parámetro de entrada su dimensión y que lo devuelva desordenado, simulando la mezcla
// de un mazo de cartas o de un bolillero (en no más de 10 líneas).
//
