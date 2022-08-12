#include <stdio.h>

// loop infinito por q no hay condición de corte

int
main(void)
{
	int i = 10;
	while (i) {
		printf("%d", i);
		i *= 10;
	}
}
