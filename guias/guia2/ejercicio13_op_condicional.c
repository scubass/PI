#include <stdio.h>
#include "../getnum2.c"


int
main(void)
{
	int num1 = getint("Introduzca el primer número");
	int num2 = getint("Introduzca el segundo número");
	
	(num2 % num1) ? (printf("son múltiplos\n")) : printf("no son múltiplos\n");
	
}


