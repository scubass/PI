#include <stdio.h>
// por ahora el programa solamente saca los espacios 

int
main(void)
{
	signed char c;
	while ((c = getchar()) != EOF){ 
		while (c == ' ') {
			putchar('\0');
		}

	}
}
