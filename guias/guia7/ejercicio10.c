#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "../getnum.h"
#define PALABRAS 6

char * elegir_palabra();
int rand_num(int left, int right);
void jugar(char * palabra);

int
main(void)
{
	srand(time(NULL));
	char * palabra = elegir_palabra();
	jugar(palabra);
	return 0;
}

char *
elegir_palabra()
{
	char * v[] = {"hola", "esto", "peligro", "operacion", "ejercicio", "problema"};
	int rand_number = rand_num(0, PALABRAS - 1);

	return v[rand_number];

}


int
rand_num(int left, int right)
{
	return (rand() % (right - left + 1)) + left;
}


void
get_letra(char * letra)
{
	do {
		*letra = getchar();
	} while (!isalnum(*letra));
}

void
match_letra(char * letra, char * palabra, char palabra_elegidas[], int * matcheadas, int len)
{
	for(int i = 0; i < len; i++) {
		if (palabra[i] == *letra) {
			palabra_elegidas[i] = *letra;
			(*matcheadas)++;
		}
	}
}

void
inicializar_palabra(char palabra[], int len)
{
	for (int i = 0; i < len; i++) {
		palabra[i] = '_';
		printf("hola\n");
	}
}

void
prnt_palabra(char palabra[], int len)
{
	for (int i = 0; i < len; i++) {
		printf("%c ", palabra[i]);
	}
	printf("\n");
}


void
jugar(char * palabra)
{
	char letra;
	int matcheadas = 0, len;
	len = strlen(palabra);	
	char palabra_elegidas[len];
	inicializar_palabra(palabra_elegidas, len);
	printf("len: %d\n", len);
	while (matcheadas != len ) {
		get_letra(&letra);
		match_letra(&letra, palabra, palabra_elegidas, &matcheadas, len);
		prnt_palabra(palabra_elegidas, len);

	}
	printf("Ha ganado\n");

}

