#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#define BLOQUE 20
#define DIM 10

void map(int * vec, size_t dim, int (*fn_ptr) (int));
int * filter(const int * vec, const int dim, int * new_dim, int (*v) (int));
int es_par(int num);
int sum_one(int num);
int
main(void)
{
	const int v[DIM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int dim, map_vec[DIM] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
	int * new_vec =filter(v, DIM, &dim, es_par); 
	map(map_vec, DIM, sum_one);
	for (int i = 0; i < dim ; i++) {
		printf("%d\n", new_vec[i]);
	}
	printf("Ahora vamos con map\n");
	for (int i = 0; i < DIM ; i++) {
		printf("%d\n", map_vec[i]);
	}
	return 0;
}

int *
filter(const int * vec, const int dim, int * new_dim, int (*v) (int))
{
	int * ans = NULL, i, j = 0;
	for (i = 0; i < dim; i++) {
		if (j % BLOQUE == 0) {
			ans = realloc(ans, sizeof(*ans) * (j + BLOQUE));
		}
		if (v(vec[i])) {
			ans[j++] = vec[i];
		}
	}

	ans = realloc(ans, sizeof(*ans) * j);
	*new_dim = j;
	return ans;
}

void
map(int * vec, size_t dim, int (*fn_ptr) (int))
{
	for (int i = 0; i < dim; i++) {
		vec[i] = fn_ptr(vec[i]);
	}
	return;
}

int
es_par(int num)
{
	return num % 2 == 0;
}

int
sum_one(int num)
{
	return num + 1;
}
