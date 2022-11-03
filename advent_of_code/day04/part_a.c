#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


void
get_numbers(FILE * f_ptr) {
	char * str_numbers = NULL;
	size_t size = 50;
	str_numbers = malloc(size * sizeof(char));

	

	printf("Lo leido es: %s\n", str_numbers);

	

}

int
main(void)
{
	FILE * f_ptr = NULL;
	f_ptr = fopen("input.txt", "r");	

	get_numbers(f_ptr);

	fclose(f_ptr);
	return 0;

}
