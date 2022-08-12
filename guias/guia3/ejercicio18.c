#include <stdio.h>
#include "../getnum2.c"
long int factorial(long int num);

int
main(void)
{
	// int num = getint("Introduzca un número\n");
	// int i = 1;
	// while (num > 0) {
	// 	i *= num;
	// 	num--;
	// }
	// printf("%d\n", i);
	long int num;
	while ((num = getlong("Introduzca un número\n")) < 0) {
		printf("Ha ingresado un número equivocado, por favor n tiene que ser entero >= 0\n");
	}

	printf("%ld\n", factorial(num));
}


long int
factorial(long int m) {
	if (m <= 0) {
		return 1;
	}
	long int i = m * factorial(m - 1);
	
	return i;
}
