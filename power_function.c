#include <stdio.h>
int power(int arg1, int arg2);

int
main(void)
{
	int number = 2;
	power(number, 2);
	return 0;
}

int
power(int base, int exponent)
{
	int i, p = 1;
	for (i = 0; i < exponent; i++)
	{
		p *= base;
	}
	printf("%d\n", p);
	return 0;
}
