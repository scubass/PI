#include <string.h>
#include <stdio.h>



void
elim_desde_hasta(char * str, char desde, char hasta, int * primero, int * ultimo)
{
	int i, j;
	i = j = 0;
	*primero = -1, *ultimo = -1;

	while(str[i] != 0) {
		if (str[i] == desde) {
			*primero = i;
			while(str[i] != hasta) {
				i++;
			}
		}
		else {
			str[j++] = str[i++];
		}
	}
	str[j] = 0;
}

int
main(void)
{
	char s[] = "abc eca ccaxxxxx";
	int primero, ultimo;
	elim_desde_hasta(s, 'a', 'c', &primero, &ultimo);
	printf("%s\nprimero: %d\nultimo: %d\n", s, primero, ultimo);
	return 0;
}
