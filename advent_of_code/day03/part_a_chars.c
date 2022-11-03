#include <stdio.h>
#include <stdlib.h>
#define BLOQUE 30
#define SIZE 12

char **
read_numbers(FILE * f_ptr, int * dim) {
	char ** c_ptr = NULL, c;
	int aux_dim = 0, i = SIZE - 1;
	c_ptr = malloc(1000 * sizeof(char[12]));

	while (!feof(f_ptr)) {
		c = fgetc(f_ptr);

		if(c == '\n') {
			aux_dim++;
			i = 0;
		}
		else {
			c_ptr[aux_dim][i++] = c;	
		}
	}

	*dim = aux_dim;
	return c_ptr;
}


int
main(void)
{
	FILE * f_ptr = NULL;
	int dim;

	f_ptr = fopen("input.txt", "r");

	char ** c_ptr = read_numbers(f_ptr, &dim);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < SIZE ; j++) {
			printf("%c", c_ptr[i][j]);
		}
	}

	fclose(f_ptr);
	return 0;
}
