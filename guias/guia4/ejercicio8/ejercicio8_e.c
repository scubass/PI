#include <stdio.h>
void f2( int letra );


int
main(void)
{
	f2('a');
	return 0;
}

void
f2 (int letra) {
	printf("Letra: \n");
	putchar(letra);
	putchar('\n');
}
// errores: las comillas simpels en letra, las cuales son para char, luego el putchar con comillas dobles también mal
