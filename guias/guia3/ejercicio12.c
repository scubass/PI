#include <stdio.h>

int
main(void)
{
	int i;
	printf("Primer loop\n");
	for (i = 3; i <= 23; i += 5) {
		printf("%d\t", i);
	}
	printf("\nSegundo loop\n");

	for (i = 20; i >= -10; i -= 6) {
		printf("%d\t", i);
	}
	printf("\nTercer loop\n");
	for (i = 19; i <= 51; i += 8) {
		printf("%d\t", i);
	}
	printf("\n");
	return 0; 
}
