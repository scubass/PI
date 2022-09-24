#include <stdio.h>
#include <stdlib.h>


#define TO_LOWER(x) if ((x) >= 'A' && (x) <= 'Z') x += ('a' - 'A');

int
main(void)
{
	int c = 'D';
	char a = '5';
	TO_LOWER(c);
	TO_LOWER(a);
	printf("c: %c, a: %c\n", c, a);
	return 0;
}
