#include <string.h>
#include <stdio.h>
void eliminate_repetitions(char *str1, char *str2);


int
main(void)
{
	char  str1[] = "hola esto es un string en c";
	char  str2[] = "esto también es un string en c";
	eliminate_repetitions(str1, str2);

	for (int i = 0; str1[i] != '\0'; i++) {
		printf("%c", str1[i]);
	}
	printf("\n");
	for (int j = 0; str2[j] != '\0'; j++) {
		printf("%c", str2[j]);
	}
	printf(" \n");
	return 0;

}


void
eliminate_repetitions(char *str1, char *str2)
{
	for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
		if (str1[i] == str2[i]) {
			str1[i] = 0;
			str2[i] = 0;
		}
	}
}
