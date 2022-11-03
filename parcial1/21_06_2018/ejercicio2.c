#include <stdio.h>
#include <stdlib.h>
void eliminar_repes(char  string1[], const char  string2[]);

int
main(void)
{
	char  string[40] = "habia una vez un pez";
	const  char * string2 = "al que madruga dios lo ayuda";
	eliminar_repes(string, string2);
	printf("%s\n", string);
	return 0;
}


void
eliminar_repes(char  string1[], const char  string2[]) 
{
	if (string1[0] == 0) {
		return;
	}

	char to_eliminate = string2[0];

	int i, j;
	for (i = j = 0; string1[i] != 0; i++) {
		if (string1[i] != to_eliminate) {
			string1[j++] = string1[i];
		}
	}
	string1[j] = 0;
}

