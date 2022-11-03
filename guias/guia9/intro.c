#include <stdio.h>
#include <stdlib.h>

int
palotes(unsigned int cant)
{
	if (cant == 0) {
		printf("\n");
		return 0;
	}
	else if (cant == 4) {
		printf("||||");
	}
	else {
		printf("palotes");
	}
	return palotes(cant - 1);
}

int
recurive_strlen(const char * str, unsigned int idx)
{
	if (str[idx] == 0) {
		return idx;
	}
	else {
		return recurive_strlen(str, idx + 1);
	}
}

const char *
recursive_strchr(const char * s, const char target)
{
	if (*s == 0) {
		return NULL;
	}

	else if (*s == target) {
		return s;
	}
	else {
		return recursive_strchr(s + 1, target);
	}
}

int
main(void)
{
	palotes(5);
	printf("%d\n", recurive_strlen("hola", 0));
	char * str = "hola";
	printf("%d\n", (int) (recursive_strchr(str, 'h') - str));
	return 0;
}
