#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
int eliminar_repetidos(const int arr[], int new_arr[], int dim);

int
main(void)
{
	const int arr[23] = {1, 1, 2, 2, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 11, 21};
	int new_arr[23];
	int new_dim = eliminar_repetidos(arr, new_arr, 23);
	printf("new_dim: %d\n", new_dim);
	for (int i = 0; i < new_dim; i++) {
		printf("%d\n", new_arr[i]);	
	}
	return 0;

}


int
eliminar_repetidos(const int arr[], int new_arr[], int dim)
{
	if (dim == 1) {
		new_arr[0] = arr[0];
		return 1;
	}

	int index = 0;

	for (int i = 0; i < dim; i++) {
		if (arr[i] != arr[i + 1]) {
			new_arr[index] = arr[i];
			index++;
			// printf("new_arr[index]: %d, arr[i] = %d, index = %d\n", new_arr[index], arr[i], index);
		}
	}
	return index;
}




// me genera dudas el último caso en el q compara a arr[dim - 1] con algo q no está en el array
// Escribir una función que reciba un vector ordenado de números enteros y su dimensión, y construya otro
// vector eliminando los valores repetidos. La función deberá retornar en su nombre la dimensión del nuevo vector (La
// función solicitada no debe superar las 10 líneas).
