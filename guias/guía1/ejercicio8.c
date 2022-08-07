#include <stdio.h>

int 
main(void) 
{
	int i;
	printf("%d\n", i);
	return 1;
}

int
main(void)
{
	char a = 'Z';
	printf("Hola %d\n", a);
	return 0;
}

// Falla en la compilación, error: redefinición de función main
