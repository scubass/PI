#include <stdio.h>
#include <ctype.h>


int
main (void)
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == ' ' || c == '\n') {
			c = '\0';
		}
		putchar(toupper(c));

	}
	return 0;
}
