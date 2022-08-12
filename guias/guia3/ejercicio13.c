#include <stdio.h>
#include "../getnum2.c"


int
main(void)
{
	int num = getint("Introduzca el número");	
	int i, j;

	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("ahora con la segunda forma\n");

	for (i = 0; i < (num * num); i++) {
		if (((i + 1) % num) == 0) {
			printf("*\n");
		}
		else {
			printf("*");
		}
	}
	return 0;
}

