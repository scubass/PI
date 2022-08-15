#include <stdio.h>

int
main(void)
{
	signed char c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar('\n');
		} else {
			putchar(c);
		}
	}
	return 0;
}
