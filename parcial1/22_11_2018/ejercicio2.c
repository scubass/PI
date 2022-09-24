#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void
eliminaN(char * string, char letra, int n)
{
	int i = 0, j = 0, len;

	// chequeo las condiciones q me pide el ejercicio
	if (isalpha(letra) == 0 || n < 0) {
		return;
	}
	len = strlen(string);

	while(i < len) {
		if (tolower(string[i]) == letra) {
			i += n + 1;
		}

		else {
			string[j++] = string[i++];
		}
	}
	string[j] = 0;
}

int
main(void)
{
	char str1[30] = "El sol sale por el este";
	eliminaN(str1, 'e', 2);
	printf("%s\n", str1);
	return 0;
}
