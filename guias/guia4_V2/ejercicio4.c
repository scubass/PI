#include <stdio.h>
#include <assert.h>
#define SWAP(t, y ,x) {t auxiliar; auxiliar = y; y = x; x = auxiliar;}

int
main(void)
{
	int num1, num2;
	num1 = 10;
	num2 = 8;
	SWAP(int, num1, num2);
	assert(num1 == 8);
	assert(num2 == 10);
	puts("Todo Ok! ");
	return 0;
}

// Define a macro swap(type, num1, num2) that interchanges two argumetns of type type
