#include <stdio.h>
#define SWAP(x, y, t) {t aux = x; x = y; y = aux;}

void
ordenar_sin_repetidos( int array[], int ordered_arr[], int dim)
{
	int min_num, min_index;
	for (int i = 0; i < dim; i++) {
		min_index = i;
		min_num = array[i];


		for (int j = i; j < dim; j++) {
			if (array[j] < min_num ) {
				min_num = array[j];
				min_index = j;
			}
		}


		ordered_arr[i] = min_num;

		if (array[i] != min_num) {
			SWAP(array[i], array[min_index], int)
		}
	}
}

int
main(void)
{
	int arr[25] = {25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int ordered_arr[25];
	ordenar_sin_repetidos(arr, ordered_arr, 25);
	for (int i = 0; i < 25; i++) {
		printf("%d\n", ordered_arr[i]);
	}
	return 0;
}
