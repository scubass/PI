#include <stdio.h>
#define LETRAS 'z' - 'a' + 1


void
playCipher(char * palabra, char vector[5][5])
{
	int letras[LETRAS] = {0};
	letras['j' - 'a']++;
	int h;

	int letras_aux = 0;
	for (h = 0; palabra[h] != 0; h++) {
		letras[palabra[h] - 'a']++;
		vector[0][h] = palabra[h];
	}
	for ( ; h < 25; h++) {

			while(letras[letras_aux] == 1) {
				letras_aux++;
			}

			printf("%c", letras[letras_aux]);
			vector[0][h] = letras_aux + 'a';
			letras_aux++;


	}
}


int
main(void)
{
	char vector[5][5] = {0};
	playCipher("presto", vector);
	for(int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c, ", vector[i][j]);
		}
		printf("\n");
	}
}
