#define ELAPSED(h1, m1, h2, m2) ((h1) * 60 + (m1)) - ((m2) + (h2) * 60) 
#include <stdio.h>

int
main(void)
{
	printf("%d\n", ELAPSED(3, 15, 2, 10));
}
