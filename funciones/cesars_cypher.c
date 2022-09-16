#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>



void
codificar(char alpha[], char * source, char target[], int key) {
	int index;
	for (int i = 0; source[i] != '\0'; i++) {
		index = (source[i] - 'a' + key) % 26;
		*target++ = alpha[index];
		source++;
	}

	*target = 0;
}


void
fill_apha(char alpha[]) 
{
	for (int i = 0; i < 26; i++) {
		alpha[i] = i + 'a';
	}
}


int
main(void)
{
	char * s1 = "abcd";
	char target[20];
	char alpha[26];
	fill_apha(alpha);
	codificar(alpha, s1, target, 1);
	printf("%s\n", target);
}
