#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 4
#define M 4

int
armar_filas(const int matrix[N][M], int vec[N])
{
	int i, j, number = 0, aux_idx = 0, condicion = 1, pos = 1;

	for(i = 0; i < N; i++) {
		for(j = M - 1; j >= 0 && condicion; j--) {
			if (matrix[i][j] < 0 || (matrix[i][j] / 10) >= 1) {
				condicion = 0; 
			}

			number += matrix[i][j] * pos;
			pos *= 10;
		}

		if (condicion) {
			vec[aux_idx++] = number;
		}
		number = 0;
		pos = 1;
		condicion = 1;
	}

	return aux_idx;

}


int
main(void)
{
	const int vector[N][M] = {
		{16, 3, 2, 13},
		{5, 10, 11, 8},
		{9, 6, 7, 12},
		{4, 15, 14, 1}
	};
	const int vector2[N][M] = {
		{1, 3, 2, 5},
		{5, 0, 1, 8},
		{9, 6, 7, 2},
		{4, 5, 4, 1}
	};
	const int vector3[N][M] = {
		{1, 3, 2, 5},
		{5, 10, 1, 8},
		{9, 6, 7, 2},
		{4, 5, 4, 1}
	};

	int final_vector[N] = {0};

	printf("%d\n", armar_filas(vector, final_vector));
	int number = armar_filas(vector3, final_vector);
	for (int i = 0; i < number; i++) {
		printf("%d\n", final_vector[i]);
	}

	return 0;
}
