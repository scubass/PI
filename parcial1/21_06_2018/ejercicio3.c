#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void
eliminar_dos(char * string, char letra)
{
	// valido si el string no es el vacio o si lo q me piden eliminar no es una letra
	if (string[0] == 0 || isalpha(letra) == 0) {
		return;
	}

	int i, j;

	for (i = j = 0; string[i] != 0; i++) {
		if (tolower(string[i]) == letra) {
			i += 2;
		}
		else {
			string[j++] = string[i];
		}
	}

	string[j] = 0;
}

int
main(void)
{
	char s[100] = "El sol sale por el este";
	eliminar_dos(s, 'e');
	printf("%s\n", s);
	return 0;
}
