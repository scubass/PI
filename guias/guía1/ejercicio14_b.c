#include <stdio.h>
// error del compilador, 19 no puede ser en base 8, en todo caso 19 en base 8 es 13
#define NRO 023 

int
main(void)
{
	long i = NRO ;
	printf("%ld\n",i);
	return 0;
}
