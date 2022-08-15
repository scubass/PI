#include <stdio.h>
#define isdigit(char) (char >= '0' && char <= '9') ? 1: 0

int
main(void)
{
	signed char c = getchar();
	if (isdigit(c)) {
		printf("%c es un dígito\n", c);
	} else {
		printf("%c no es un dígito\n", c);
	}
}
