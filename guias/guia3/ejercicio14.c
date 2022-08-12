#include <stdio.h>


int
main(void)
{
	int minusculas, mayusculas;
	minusculas = mayusculas = 0;
	int menor_minusculas = 'z';
	int menor_mayusculas = 'Z';
	signed char c;
	while ((c = getchar()) != EOF && c != '\n' && c!= '\t') {      // puedo usar la negación q es más fácil
		if (c >= 'a' && c <= 'z') {
			minusculas++;
			if (c < menor_mayusculas && minusculas > 0) {
				menor_mayusculas = c;
			}
		} else if (c >= 'A' && c <= 'Z') {
			mayusculas++;
			if (c < menor_mayusculas && mayusculas > 0) {
				menor_mayusculas = c;
			}
		}
	}

	printf("minusculas: %d, mayusculas: %d, menor minuscula: %c, menor mayúscula: %c\n", minusculas, mayusculas, menor_minusculas, menor_mayusculas);
	return 0;
}

