#include <stdio.h>
#include <stdlib.h>
#define LINE 4


int
es_magic(const int vec[LINE][LINE])
{
	int condicion = 1, condicion2 = 1;
	int square = 16;
	int numbers[16] = {0};
	int columnas[LINE] = {0};
	int lineas[LINE] = {0};

	for (int i = 0; i < LINE && condicion != 0; i++) {
		for (int j = 0 ; j < LINE && condicion != 0; j++) {
			if (vec[i][j] < 1 || vec[i][j] > square || numbers[vec[i][j] - 1] != 0) {
				condicion = 0;
			}
			numbers[vec[i][j] - 1]++;

			columnas[i] += vec[j][i];
			lineas[i] += vec[i][j];

			
		}
	}
	for(int k = 0; k < LINE && condicion2 != 0; k++) 
	{
		if (lineas[k] != 34 || columnas[k] != 34) {
			condicion2 = 0;
		}
	}

	return condicion & condicion2;
}


int
main(void)
{
	const int v1[LINE][LINE] = {
		{16, 3, 2, 13},
		{5, 10, 11, 8},
		{9, 6, 7, 12},
		{4, 15, 14, 1}
	};
	const int v2[LINE][LINE] = {
		{16, 4, 5, 10},
		{11, 2, 3, 6},
		{12, 9, 13, 15},
		{7, 8, 1, 14}
	};

	
	printf("%d\n", es_magic(v1));
	printf("%d\n", es_magic(v2));
}
