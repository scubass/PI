#include <stdio.h>

int
main(void)
{
	char a, b, num, ahex, bhex;
	a = getchar();
	b = getchar();

	if (a >= '0' && a <= '9' && b >= '0' && b <= '9')
	{
		num = (a - '0') * 10 + (b - '0');
		ahex = num / 16 + '0';
		bhex = ((num % 16) >= 10) ? (num % 16  - 10 + 'A') : (num % 16 + '0');
	}
	printf("%c %c %d\n", ahex, bhex, num);
	return 0;
}
