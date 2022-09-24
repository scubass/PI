#include <stdio.h>


void
elimina(char * str) 
{
	int letras[127] = {0};
	
	// calculo la cantidad de veces que aparece cada letra en el string
	int h;
	for (h = 0; str[h] != 0; h++) {
		letras[(int) str[h]  - 1]++;
	}
	
	int i, j;
	i = j = 0;

	while(str[i] != 0) {
		// si esa letra aparecio mas de 1 vez, restale 1 al contador asociado a la misma 
		if (letras[(int) str[i]  - 1] != 1) {
			letras[(int) str[i]  - 1]--;
			i++;
		}
		// si el contador relacionado es 1 --> copia
		else {
			str[j++] = str[i++];
		}

	}

	str[j] = 0;
	
	
}


int
main(void)
{
	char v[] = "abcbc.cba";
	elimina(v);
	printf("%s\n", v);
	return 0;
}


1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
16 0 0
17 0 0
18 19 0




1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
0 0 17 0
0 18 19 0


1 2 3 4
9 10 11 12 
0 0 17 0
