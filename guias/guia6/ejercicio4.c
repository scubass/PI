#include <stdlib.h>
#include <stdio.h>
int eliminate_repetitions(const int arr[], int dim);


int
main(void)
{
	const int arr[10] = {1, 2, 5, 5, 3, 4, 2 ,4, 2, 5};
	eliminate_repetitions(arr, 10);
	return 0;
}

// versión primitiva de la función

int
eliminate_repetitions(const int arr[], int dim)
{
	// el array de los no repetidos tiene dim <= dim de arr
	int new_arr[dim];
	int rep_flag = 1;
	int new_dim = 0;
	for (int i = 0; i < dim; i++) {
		for (int j = i; j < dim; j++) {
			if (arr[i] == arr[j]) {
				rep_flag = 0;
			}
		} 

		if (rep_flag != 0) {
			new_arr[new_dim] = arr[i];
			new_dim++;
		}
	}

	for (int h = 0; h < dim; h++) {
		printf("%d\n", new_arr[h]);
	}

	return 0;

}
