#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 4
int biggest_dif(const int arr[], int length);
int length(const int arr[]);

int
main (void)
{
	int arr[ARRAY_SIZE] = {50, 102, 100, 90};
	printf("%d\n", arr[1] - arr[0]);

	printf("biggest difference: %d\n", biggest_dif(arr, ARRAY_SIZE));

	return 0;
}

int
biggest_dif(const int arr[], int length) 
{
	if (length == 1) {
		return 0;
	}
	
	int difference = abs(arr[1] - arr[0]);
	int aux_difference;

	if (length == 2) {
		return difference;
	}

	for (int i = 2; i < length; i++) {
		aux_difference = abs(arr[i] - arr[i - 1]);
		printf("aux difference: %d\n", aux_difference);
		printf("difference: %d\n", difference);
		if (aux_difference > difference) {
			difference = aux_difference; 
		}
	}
	return difference;


}



int
length(const int arr[]) 
{

	int i;
	for (i = 0; arr[i] != 0; i++) {
	
	}

	return i;
}

// Dado un arreglo lineal de números reales, cuyo indicador de fin de elementos es cero, escribir una función para
// obtener la mayor diferencia entre dos elementos consecutivos. (En no más de 5 líneas). Tener en cuenta que los números
// pueden ser negativos. En caso de que el vector tenga un solo elemento deberá retornar como diferencia el valor cero.
