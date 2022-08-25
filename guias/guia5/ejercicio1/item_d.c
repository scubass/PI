#include <stdio.h>

static int m;
int b;
static void este(void);

int
main(void)
{
	m = 2;
	b = 7;
	printf("Antes de llamar a este()\n");
	printf("m vale : %d\n", m);
	printf("b vale : %d\n", b);
	este();
	printf("m vale : %d\n", m);
	printf("b vale : %d\n", b);


	return 0;
}

static void
este(void)
{
	static int m;

	m++;
	b = - 3;
	printf("Dentro de este() m vale %d y b vale %d\n", m, b);

	return;
}


// cambia b por ser variable global no static