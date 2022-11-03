#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 20


void
armar_archivo(unsigned int num)
{
	char s[MAX] = "touch ejercicio";
	int i = strchr(s, 0) - s, condition = num >= 10;
	while(num != 0) {
		s[i] = num % 10 + '0';
		i++;
		num /= 10;
	}
	strcat(s, ".c");
	if (condition) {
		char aux = s[15];
		s[15] = s[16];
		s[16] = aux;
	}
	system(s);
}

int
main(void)
{
	for (int i = 1; i < 4; i++) {
		armar_archivo(i);
	}
	return 0;
}
