#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#define BLOQUE 1000

long *
parse_lines(FILE * f_ptr, size_t * dim)
{
	long * ans = NULL, aux_dim = 0;
	while (!feof(f_ptr)) {
		ans = realloc(ans, 12 * sizeof(long) * (BLOQUE));

		fscanf(f_ptr, "%ld", &ans[aux_dim++]);
	}

	*dim = aux_dim;
	return ans;

}

int
main(void)
{
	FILE * f_ptr = NULL;
	f_ptr = fopen("input.txt", "r");
	size_t dim;
	long * numbers = parse_lines(f_ptr, &dim);

	for (int i = 0; i < dim ; i++) {
		printf("%ld\n", numbers[i]);
	}
	fclose(f_ptr);
	free(numbers);
	return 0;
}
