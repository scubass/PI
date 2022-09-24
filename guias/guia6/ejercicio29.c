#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


void deleteChars(char s1[], char s2[])
{
	int i = 0, j = 0;
	int indx1 = 0, indx2 = 0;

	while(s1[i] != 0 || s2[j] != 0) {
		// si son iguales no los quiero asi que apunto a la siguiente posicion
		if (s1[i] == s2[j]) {
			i++;
			j++;
		}
		// si no son iguales, chequeo para cada uno q no esten vacios, si no apunta al final del string lo copio
		else  {
			if(s1[i]) {
			s1[indx1++] = s1[i++];
			}
		
			if (s2[j]) {
			s2[indx2++] = s2[j++];
			} 
		 
		}
	}
	// finalmente agrego el caracter nulo para indicar el fin de los strings
	s1[indx1] = 0;
	s2[indx2] = 0;
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
