#include <stdio.h>

#define LAST_N_BIT(x, n) ((x) >> n) & 1
void print(int matriz[][4]);

int
main(void)
{
	int matriz[2][2] = {
		{3, 5},
		{2, 4}
	};
	printf("\n%d\n", LAST_N_BIT(6, 0));
	printf("%d\n", LAST_N_BIT(6, 1));
}


void
print(int matriz[][4]) {
	printf("%d\n", matriz[0][3]);
}


