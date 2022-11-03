#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define BLOQUE 10


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
main(void)
{
	FILE * ptr_file;
	ptr_file = fopen("numeros.txt", "r");
	int c, dim;
	
	// do {
	// 	c = fgetc(ptr_file);
	// 	printf("Caracter leido: %c\n", c);
	// } while (c != EOF);
	
	// while(!feof(ptr_file)) {
	// 	fscanf(ptr_file, "%d", &c);
	// 	printf("Caracter leido: %d\n", c);
	// }

	int * vector = read_numbers(ptr_file, &dim);


	printf("Ahora se van a imprimir los numeros leídos\n");
	for (int i = 0; i < dim; i++) {
		printf("%d\n", vector[i]);
	}

	fclose(ptr_file);
	return 0;

}
