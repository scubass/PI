#include <stdio.h>

void misterio1(char *s1, const char *s2);

int main(void) {
  char string1[80], string2[80];
  printf("Ingrese dos cadenas: ");
  // mete en strin1 y strin2 lo q le pasen por entrada estandar
  // recordar que el espacio corta asi que si le paso Santiago Cubas
  // en s1 queda Santiago y en s2 Cubas.
  //
  scanf("%s%s", string1, string2);
  misterio1(string1, string2);
  printf("string1 queda: %s\nstrring2 queda: %s\n", string1, string2);
  return 0;
}

void misterio1(char *s1, const char *s2) {
  // mientras *s1 no sea el null, va aiterar hasta el final del string
  // y se queda en la posicion final del string1
  while (*s1 != 0)
    ++s1;
  for (; *s1 = *s2; s1++, s2++)
    ;
}

// el programa básicamente lee dos string y al final de uno pone el otro
