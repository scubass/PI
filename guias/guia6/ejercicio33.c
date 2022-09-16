#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>
static int posAlfa(char alpha[], char letra);

#define MAX 100
void crearAlfabeto(char  alpha[]);
void decodificar(char * s, char alpha[], char *t);

void codificar(char *s, char alpha[], char *t);
void desordenarAlfabeto(char alpha[]);
int rand_index(int left, int right);


int main(void) {
  char msg[MAX];
  char dest[MAX];
  // Debemos probar con mayusculas, porque siempre decodifica a mayuscuas
  char *s = "MENSAJE A CODIFICAR";
  char *s2 = "Mensaje a codificar";
  char alpha[MAX];
  crearAlfabeto(alpha);
  codificar(s, alpha, msg);
  assert(strlen(s)==strlen(msg));
  assert(strcmp(s, msg) != 0);
  decodificar(msg, alpha, dest);
  assert(strcmp(dest, s) == 0);

  codificar(s2, alpha, msg);
  assert(strlen(s2)==strlen(msg));
  assert(strcmp(s2, msg) != 0);
  decodificar(msg, alpha, dest);
  assert(strcmp(dest, s) == 0);
  
  puts("OK");
  return 0;
}


void
crearAlfabeto(char alpha[]) {
	for (int i = 0; i < 26; i++) {
		alpha[i] = i + 'A';
	}
	
	desordenarAlfabeto(alpha);

}

void
desordenarAlfabeto(char alpha[]) {
	int aux, idx;
	for (int i = 0; i < 26; i++) {
		idx = rand_index(0, 25);
		aux = alpha[i];
		alpha[i] = alpha[idx];
		alpha[idx] = aux;
	}
}


int
rand_index(int left, int right) {
	return (rand() % (right - left + 1) + left);
}

void
codificar(char *s, char alpha[], char *t) {
	while (*s) {
		// si lo q hay en s es una letra, en target metemos la representaión de esa letra
		// en el alfabeto mezclado, aprovechando los indices y orden de las letras
		if (isalpha(*s)) {
			*t++ = alpha[toupper(*s) - 'A'];
			s++;
		}
		// si no es una letra sigo;
		else {
			*t++ = *s++;
		}
	}
	// salgo del while, estoy en la última pposicion de t, le meto el null, para indicar el fin del string
	*t = 0;
	return;
}


void
decodificar(char * s, char alpha[], char *t) {
	while (*s) {
		if(isalpha(*s)) {
			*t++ = posAlfa(alpha, toupper(*s) + 'A');
			s++;
		}
		else {
			*t++ = *s++;	
		}
	}
	*t = 0;
	return;
}

static int
posAlfa(char alpha[], char letra) {
	int i;
	for (i = 0; alpha[i] != letra && alpha[i]; i++) {

	} 

	return (alpha[i] != '\0') ? i : -1;
}










