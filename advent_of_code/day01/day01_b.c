#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLOQUE 20


int *
read_numbers(FILE * f_ptr, int * dim) 
{
	int * vector = NULL, idx = 0;

	while (!feof(f_ptr)) {
		if (idx % BLOQUE == 0) {
			vector = realloc(vector, sizeof(*vector) * (idx + BLOQUE));
		}

		fscanf(f_ptr, "%d", &vector[idx++]);
	}

	vector = realloc(vector, idx * sizeof(*vector));
	*dim = idx;
	return vector;
}

int
calculate_increments(int * numbers, int dim)
{
	int increments = 0;

	for (int i = 3; i < dim; i++) {
		if (numbers[i] > numbers[i - 3]) {
			increments++;
		}
	}

	return increments;
}

int
main(void)
{
	FILE * f_ptr;
	int * numbers, dim, increments;
	f_ptr = fopen("input.txt", "r");
	numbers = read_numbers(f_ptr, &dim);

	increments = calculate_increments(numbers, dim);
	printf("Increments: %d\n", increments);
	return 0;
}
