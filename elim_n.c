#include <stdio.h>
void
elimnin(char * str, char letra, int number)
{
	int i, j, counter;
	i = j = counter = 0;

	while(str[i] != 0) {
		// si encuentro la letra y todavia no elimine number veces sigo
		if (str[i] == letra && counter != number) {
			counter++;
			i++;
		}
		// si no entra en el if copia
		else {
			str[j++] = str[i++];
		}
	}
	str[j] = 0;
}


int
main(void)
{
	char texto[] = "este es el texto original";
	elimnin(texto, 'e', 3);
	printf("%s\n", texto);
	return 0;
}
