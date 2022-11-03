#include <stdio.h>
#include <stdlib.h>


char * find_idx( char * str, char c)
{
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == c) {
			return str + i;
		}
	} 
	return NULL;
}


int
main(void)
{
	char * string = "hola";
	printf("%c\n", * find_idx(string, 'o'));
	return 0;
}
