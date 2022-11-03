#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int
main(void)
{
	char ** str_vec = malloc(sizeof(char *) * 3);
	for (int i = 0; i < 3; i++) {
		str_vec[i] = malloc(sizeof(char) * MAX);
		scanf("%s", str_vec[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", str_vec[i]);
		free(str_vec[i]);
	}
	free(str_vec);
	return 0;
}
