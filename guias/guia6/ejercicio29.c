#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


void deleteChars(char s1[], char s2[]) {
	int i = 0, j = 0, count1 = 0, count2 = 0;

	// mientras q ninguno de los 2 sea '\0'
	while(s1[i] || s2[j]) {
		// si son iguales sigo
		if (s1[i] == s2[j]) {
			i++;
			j++;
		}
		else {
			// si s1[i] != '\0' poneme en s1[count1] lo q le sigue a s1[i], ejemplo 
			// "hola" con "fhas" aca en h como son diferentes en luger de h pone la o
			// me parece que mueve el próximo cracter hacia la izquierda
			if (s1[i]) {
				s1[count1++] = s1[i++];
			}
			// hace lo mismo pero con s2
			if (s2[j]) {
				s2[count2++] = s2[j++];
			}

		}
	}
	s1[count1] = 0;
	s2[count2] = 0;
}

int main(void) {

  char s1[] = "Hola, soy un string";
  char s2[] = "Yo soy otro string";

  deleteChars(s1, s2);
  assert(strcmp(s1, "Hla, sy un string")==0);
  assert(strcmp(s2, "Y soy tro string")==0);

  char empty[] = "";
  deleteChars(s1, empty);
  assert(strcmp(s1, "Hla, sy un string")==0);
  assert(strcmp(empty, "")==0);

  strcpy(s1, "ABCDE");
  strcpy(s2, "abcde");
  deleteChars(s1, s2);
  assert(strcmp(s1, "ABCDE")==0);
  assert(strcmp(s2, "abcde")==0);

  deleteChars(s1,s1);
  assert(strcmp(s1, "")==0);


  printf("OK!\n");
  return 0;
}
