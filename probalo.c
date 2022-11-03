#include <stdio.h>
#include <stdlib.h>

int main(void) {
#define CANT 4

  // inicializa un puntero a un vector de punteros de char
  // con esta notación podemos alocar memoria dinámica y modificar
  // la dimensión de vector
  char **vector;
  vector = malloc(sizeof(char *) * CANT);

  // ahora podemos usar a vector como si lo hubiesemos inicializado como
  // char * vector[CANT];

  vector[0] = "Hola";
  vector[1] = "Esto";
  vector[2] = "Es";
  vector[3] = "C";

  // pero en el caso en el que querramos modificar el tamaño del vector
  // simplemente usariamos realloc

  vector = realloc(vector, sizeof(char *) * (CANT + 1));

  vector[4] = "Señores";

  for (int i = 0; i < (CANT + 1); i++) {
    printf("%s ", vector[i]);
  }
  printf("\n");

  vector[0][0] = 'Y';
  printf("%s\n", vector[0]);

  // en salida estandar muestra:
  // Hola Esto Es C SeñoreJJ
  //
  free(vector);
}
