#include <stdio.h>

int a, b, c;

void primero ( void );
void segundo ( void );

int
main(void)
{
	a = 1;
	printf("El valor de c es %d\n", c);
	segundo();
	printf("El valor de a es %d, el de b es %d\n", a, b);
	primero();
	printf("El valor de a es %d, el de c es %d\n", a, c);
	return 0;
}

void
primero ( void )
{
	int a;
	a = 3;
	c = 0;
}

void
segundo ( void )
{
	int a;
	c = 0;
	a = 2;
	b = -a;
}

// primero falta \n en cada printf, segundo en el scope de main a = 1 y las funciones no cambian a si, segundo() cambia a b por -a y en el scope de segundo a = 2 entonces b = -2, finalmente c = 0 en ambas funciones
