#include <stdio.h>
#include <stdlib.h>


void
elimina(char * str_in, const char * str_caracteres)
{
	int i, j;
	i = j = 0;

	int caracteres[127] = {0};
	// si alguno de los dos es vacio no tengo nada por hacer
	if (str_in[0] == 0 || str_caracteres[0] == 0) {
		return;
	}

	// me armo un vector con los caracteres que aparecen en str_caracteres
	for (int h = 0; str_caracteres[h] != 0; h++)  {
		caracteres[(int) str_caracteres[h]]++;
	}

	while(str_in[i] != 0) {
		// si el caracter aparece en str_caracteres -> en su posicion en el vector no va ser cero entonces sigo
		if (caracteres[(int) str_in[i]] != 0) {
			i++;
		}
		// si el caracter no aparece en str_caracteres lo copio
		else {
			str_in[j++] = str_in[i++];
		}
	}
	// finalmente le agrego el 0 para indicar el fin del string
	str_in[j] = 0;
}


int
main(void)
{
	char s[] = "Un string. Con diversas letras y simbolos!!";
	char * str = "esto rompe todo";
	elimina(str, "rompe tod");
	elimina(s, "aeiou");
	elimina(s, " !.");
	// esto debería tirar un segmentation fault por q la ñ no está entre 0 y 126 q son los indices del vector
	printf("%s\n", s);
	return 0;
}
