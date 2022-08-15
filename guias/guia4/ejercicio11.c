#include <stdio.h>
int mayor_de_tres(int a, int b, int c);

int
main(void)
{
	printf("%d\n", mayor_de_tres(1, 2, 3));
	printf("%d\n", mayor_de_tres(7, 2, 9));
	return 0;
}

int
mayor_de_tres(int num1, int num2, int num3) 
{
	if (num1 > num2 && num1 > num3) {return num1;} else {return (num2 > num3) ? num2 : num3;}
}
