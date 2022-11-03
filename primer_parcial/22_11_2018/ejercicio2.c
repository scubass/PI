#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define CHARTOINT(x) (((x) >= '0' && (x) <= '9') ? (x) - '0' : -1) 


void
eliminaN(char * str, char letra, int n)
{
	// valido la condicion que me pasan
	if (isalnum(letra) == 0 || n < 0) {
		return;
	}


	int len = strlen(str);

	int i, j;
	i = j = 0;

	while(i < len) {
		// si encuentro la letra q me pasan, siempre va a pasar n + 1 posiciones
		// si me paso de memoria no va a copiar por lo q no va pisar memoria
		if (tolower(str[i]) == letra) {
			i += n + 1;
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
	int a = CHARTOINT('9');
	char b = '3';
	int c = CHARTOINT(b + 1);
	printf("%d\n%d\n", a, c);
	char v[] = "La calle esta dura";
	eliminaN(v, 'l', 3);
	printf("%s\n", v);
	return 0;
	
}
