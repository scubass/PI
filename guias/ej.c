#include <stdio.h>

int
main(void)
{
	int a, digit = 0;
	while ((a = getchar()) != EOF) {
		if (a >= '0' && a <= '9') {
			digit = 1;
		}

	}
	printf("%d dígito\n", digit ? "Hubo" : "No hubo");
	return 0;
}
