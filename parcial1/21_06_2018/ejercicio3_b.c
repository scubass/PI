#include <ctype.h>
#include <string.h>
#include <stdio.h>


void
elimina_n(char * str, const char letra)
{
	if (str[0] == 0 || isalpha(letra) == 0) {
		return;
	}
	int i, j;
	i = j = 0;
	int len = strlen(str);

	while(i < len) {
		if (tolower(str[i]) == letra) {
			i += 3;
		}
		else {
			str[j++] = str[i++]; 
		}
	}
	str[j] = 0;
}


int
main(void)
{
	char v[] = "El sol sale por el este";
	elimina_n(v, 'e');

	printf("%s\n", v);
	for (int i = 0; v[i] != 0; i++) {
		printf("%c,  ", v[i]);
	}
	printf("\n");
	char va[10] = "hola";
	for (int i = 0; i < 10 ; i++) {
		printf("%d, ", va[i]);
	}
	return 0;
}
