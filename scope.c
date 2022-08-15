#include <stdio.h>
static int f1 ( void );
int f2 ( void );

int
main(void)
{
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1()); 
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f1() = %d\n", f1());
	printf("f2() = %d\n", f2());
	printf("f2() = %d\n", f2());
	printf("f2() = %d\n", f2());
	printf("f2() = %d\n", f2());
	printf("f2() = %d\n", f2());
}

static int
f1 ( void ) 
{
	static int count = 0;
	count++;
	return count;
}

// que count sea static permite por ejemplo contar la cantidad de veces que se llama la función

int
f2 ( void )
{
	int counter = 0;
	counter++;
	return counter;
}
