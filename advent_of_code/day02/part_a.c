#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct commands {
	char command[10];
	int drection;
};

typedef struct commands commands;

#define BLOQUE 20

commands * read_lines(FILE * f_ptr, int * dim) {
	int aux_dim = 0;
	commands * ans = NULL;
	char * aux_str = malloc(sizeof(char) * 10);
	while (!feof(f_ptr)) {
		if (aux_dim % BLOQUE == 0) {
			ans = realloc(ans, sizeof(commands) * (aux_dim + BLOQUE));	
		}
		fscanf(f_ptr, "%s %d", aux_str, &ans[aux_dim].drection);
		strcpy(ans[aux_dim].command, aux_str);
		aux_dim++;
	}
	*dim = aux_dim;
	return ans;
}

int
calculate_result(commands * instructions, int dim)
{
	int horizontal = 0, depth = 0;

	for (int i = 0; i < dim; i++) {
		if (strcmp(instructions[i].command, "forward") == 0) {
			horizontal += instructions[i].drection;
		}
		else if (strcmp(instructions[i].command, "up") == 0) {
			depth -= instructions[i].drection; 
		}
		else {
			depth += instructions[i].drection;
		}

	}


	return (depth * horizontal);
}

int
main(void)
{
	FILE * f_ptr;
	f_ptr = fopen("input.txt", "r");
	int dim, result;
	commands * instructions;
	instructions = read_lines(f_ptr, &dim);

	result = calculate_result(instructions, dim);

	printf("depth * horizontal direction: %d\n", result);

	free(instructions);
	fclose(f_ptr);
	return 0;
}
