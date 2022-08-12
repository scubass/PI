#include <stdio.h>

int
main(void)
{
	signed char c;
	unsigned long number = 0;
	int decimal = 1;
	while ((c = getchar()) != EOF && c <= '9' && c >= '0') {
		number += (c - '0') * decimal;
		decimal *= 10;
	}

	printf("%lu\n", number);
	return 0;
}

