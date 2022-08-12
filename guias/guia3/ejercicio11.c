#include <stdio.h>

int
main(void)
{
	int i;
	printf("N\t10*N\t100*N\t1000*N\t\n\n");
	for (i = 1; i <= 20; i++) {
		printf("%02d\t%03d\t%04d\t%05d\n", i, i * 10, i * 100, i * 1000);
	}
return 0;
}
