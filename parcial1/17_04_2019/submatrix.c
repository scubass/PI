#include <stdio.h>

int
main(void)
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d,  %d || ", (i / 3) * 3, (j / 3) * 3);
		}
		printf("\n");
	}
	return 0;
}
