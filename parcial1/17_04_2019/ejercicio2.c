#include <stdio.h>
#include <ctype.h>
#define EPSILON 'a' - 'A'
#define LETRAS 26
void func(void);
void vector_append(int c, int vector[]);
void imprimir_variables (int letras, int minusculas, int mayusculas, int no_letra, int vector_letras[]);

int
main(void)
{
	func();
	return 0;
}



void
func(void)
{
	int letras = 0, minusculas = 0, mayusculas = 0, no_letra = 0;
	int vector[LETRAS] = {0};

	int c;
	
	// voy tomando letras siempre y cuando no sean EOF
	// y luego las voy clasificando.
	while ((c = getchar()) != EOF) {
		if (isalpha(c)) {
			if (isupper(c)) {
				mayusculas++;
			} else {
				minusculas++;
			}
			letras++;
			vector_append(c, vector);
		}
		else {
			// incluye los \n y todo lo demás
			no_letra++;
		}
	}

	imprimir_variables(letras, minusculas, mayusculas, no_letra, vector);
}

void
vector_append(int c, int vector[])
{
	if (isupper(c)) {
		c += EPSILON;
	}

	vector[c - 'a']++;
}

void
imprimir_variables (int letras, int minusculas, int mayusculas, int no_letra, int vector_letras[])
{
	printf("el texto contenia %d letras\n", letras);
	printf("%d mayusculas y %d minusculas\n", mayusculas, minusculas);
	printf("%d no eran letras\n", no_letra);

	printf("A continuación vamos a imprimir las letas q aparecieron, todas en minúsuclas\n");

	for (int i = 0; i < LETRAS; i++) {
		if (vector_letras[i] != 0) {
			printf("%c apareció %d veces\n", i + 'a', vector_letras[i]);
		}
	}
}







