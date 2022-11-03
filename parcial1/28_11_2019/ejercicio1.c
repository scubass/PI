#include <stdio.h>
#include <string.h>


void
elimina(char * str)
{
	int tabla[255] = {0};

	for (int i = 0; str[i] != 0; i++) {
		tabla[(int) str[i]]++;
	}
	int i, j;
	i = j = 0;

	while(str[i] != 0) {
		if (tabla[(int) str[i]] > 1) {
			tabla[(int) str[i++]]--;
		}
		else if ( tabla[(int) str[i]] == 1) {
			str[j++] = str[i++];
		}
	}
	str[j] = 0;
}


int
main(void)
{
	char v[15] = "abcbc.cba";
	char v2[20] = "123456654321";
	char v3[15] = "Abc123aBC";
	char * falla = "esto fallta por ser constante";
	// elimina(falla);
	elimina(v3);
	elimina(v2);
	elimina(v);
	printf("%s\n", v);
	printf("%s\n", v2);
	printf("%s\n", v3);
	return 0;
}
