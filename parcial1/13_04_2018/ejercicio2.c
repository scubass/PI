#define LETRAS ('Z' - 'A' + 1)
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void letras(const char *str_in, char *str_out);



int
main(void)
{
	char s[LETRAS + 1] = {0};
	letras("1x234zxZ56" ,s);
	printf("%s\n", s);
}

void
letras(const char *str_in, char *str_out)
{

	for (int j = 0; str_in[j] != 0; j++) {
		if (isalpha(str_in[j])) {
			// printf("%c, %d\n", str_in[j], tolower(str_in[j]) - 'a');
			str_out[tolower(str_in[j]) - 'a'] += 1;
		}
	}

	for(int h = 0; h < LETRAS + 1; h++) {
		if (str_out[h] != 0) {
			printf("%c", h + 'a');
		}
	}
	printf("\n");


}



// Escribir una función letras que reciba un string de longitud desconocida y retorne en un string de salida sólo las
// letras del alfabeto inglés (sin importar mayúsculas o minúsculas) que forman parte del string recibido, en orden
// alfabético.
//
//
