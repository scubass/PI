#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLOQUE 10


int *
interseccion(const int * vec1, const int * vec2, size_t dim1, size_t dim2, int * dim)
{
	int * ans = NULL, aux = 0, i = 0, j = 0;
	while(i < dim1 && j < dim2) {
		if (aux % BLOQUE == 0) {
			ans = realloc(ans, sizeof(int) * (aux + BLOQUE));
		}
		if (vec1[i] == vec2[j]) {
			ans[aux++] = vec1[i++];
			j++;
		}
		else if (vec1[i] < vec2[j]) {
			i++;
		}
		else {
			j++;
		}
	}

	ans = realloc(ans, sizeof(int) * i);
	*dim = aux;
	return ans;
}

char *
str_cat(char * source, const char * t) {
	char * ans = NULL;

	ans = malloc(strlen(source) + strlen(t));
	strcpy(ans, source);
	strcpy(ans + strlen(t), t);
	return ans;
}

char * 
elimina_repetidos(const char * s)
{
	int i = 1, j = 1;
	char * ans = malloc(sizeof(char) * BLOQUE);
	if (s[0] == 0) {
		return NULL;
	}

	ans[0] = s[0];

	while (s[i] != 0) {
		if (j % BLOQUE == 0) {
			ans = realloc(ans, sizeof(char) * (j + BLOQUE));
		}

		if (s[i] == s[i - 1]) {
			i++;
		}
		else {
			ans[j++] = s[i++];
		}
	}
	ans[j] = 0;
	ans = realloc(ans, sizeof(char) * (j + 1));
	return ans;
}

int
main(void)
{
	int vec1[10] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
	int vec2[10] = {2, 3, 4, 5, 6, 11, 12, 13, 14};
	int dim;
	int * ans = interseccion(vec1, vec2, 10, 10, &dim);
	for (int i = 0; i < dim; i++) {
		printf("%d, ", ans[i]);
	}

	printf("\n");
	char * ch_ans = str_cat("hola", "chau");
	printf("%s\n", ch_ans);

	char * str = "hhoollaa  eessttoo eeesss  uunnaaaa oorracccioonn paaarrraa vveerrr ssssiiii eeeellimina lloosss reepeeettttiddddossss";
	char * str1 = elimina_repetidos(str);
	printf("%s\n", str1);

	free(ans);
	return 0;
}
