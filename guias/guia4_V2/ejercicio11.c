#include <stdio.h>
#include <assert.h>
int mayor_de_tres (int, int, int);

int
main(void)
{
	assert(mayor_de_tres(10, 8, 2) == 10);
	assert(mayor_de_tres(1, 2, 1) == 2);
	assert(mayor_de_tres(60, 432, 432423));
	puts("Todo ok ");
	return 0;
}

int
mayor_de_tres ( int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3) return num1; else return (num2 > num3) ? num2 : num3;
}
