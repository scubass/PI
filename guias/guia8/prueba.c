#include <stdio.h>
#include <stdlib.h>

struct item {
	int x, y;
};

int
main(void)
{

	struct item item1 = {1, 4}, item2 = {0, 0};
	item2 = item1;
	printf("%d, %d\n", (&item2)->x, item2.y);
	return 0;
}


int
factorial(int num)
{
	if (num == 0) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}
