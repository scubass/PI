#include <stdlib.h>
#include <stdio.h>
#define ARRAY_SIZE 10
#include "ordenar.c"

 // void ordenar_sin_repetidos( int array[], int ordered_arr[], int dim);
int
main (void)
{
	// int arr[ARRAY_SIZE] = {6, 7, 2, 9, 12, 75, 75, 9, 6, 7};
	// int min_num;
	// int min_index;
	// int ordered_arr[ARRAY_SIZE];
 //
	// for (int i = 0; i < ARRAY_SIZE ; i++) {
	// 	min_index = i;
	// 	min_num = arr[i];
 //
	// 	for (int j = i; j < ARRAY_SIZE ; j++) {
	// 		if (arr[j] < min_num ) {
	// 			min_num = arr[j];
	// 			min_index = j;
	// 		}
	// 	}
	// 	// salgo del loop y tengo el menor número y su indice
	// 	// si el el menor número es diferente a arr[i] lo swapeo
 //
	// 	ordered_arr[i] = min_num;
	// 	if (arr[i] != min_num) {
	// 		SWAP(arr[i], arr[min_index], int)
	// 	}
 //
	// }
 //
	// for (int h = 0; h < ARRAY_SIZE ; h++) {
	// 	printf("%d\n", ordered_arr[h]);
	// }
 //
	int arr[ARRAY_SIZE] = {4, 5, 7, 6, 3, 4, 6, 7, 2, 4};
	int ordered_arr[ARRAY_SIZE];
	ordenar_sin_repetidos(arr, ordered_arr, ARRAY_SIZE);
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d\n", ordered_arr[i]);
	}
	return 0;
}
