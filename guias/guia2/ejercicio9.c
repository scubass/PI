#include <stdio.h>

# include "../getnum2.c" // lib con getint

int
main(void)
{
	int num = getint("Intoduzca un n > 0 entero\n");	
	printf("%d\n", num<<1);
}
