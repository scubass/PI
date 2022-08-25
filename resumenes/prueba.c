#include <stdio.h>
#define Hola(nombre) printf("Hola " #nombre"\n");


#define mayor(n1, n2, n3) if (n1 > n2) \
				n3 = n1; \
				else  \
					n3 = n2; \

int
main(void)
{
	Hola(Santiago);
	int n1 = 4, n2 = 9, n3;
	mayor(n1, n2, n3);
	printf("%d\n", n3); return 0;
}

