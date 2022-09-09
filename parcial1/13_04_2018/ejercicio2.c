#define LETRAS ('Z' - 'A' + 1)
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void letras(const char *str_in, char *str_out);



int
main(void)
{
	char s[LETRAS + 1];
	letras("Abracadabra Pata De Cabra", s);
	printf("%s\n", s);
}

void
letras(const char *str_in, char *str_out)
{
	int index;
	for (int i = 0; str_in[i] != '\0'; i++) {
		if (isalpha(str_in[i])) {
			printf("%c", str_in[i]);
			// index = tolower(str_in[i]) - 'a';
			// str_out[index]++;
		}
	}
}





// Escribir una función letras que reciba un string de longitud desconocida y retorne en un string de salida sólo las
// letras del alfabeto inglés (sin importar mayúsculas o minúsculas) que forman parte del string recibido, en orden
// alfabético.
