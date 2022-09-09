#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int
return_index(int number)
{
	return (number / 4) * 4;
}


int
main(void)
{
	const int v[9][9] = {
		{1, 2, 3, 4, 5, 6, 7}
	};

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf(" ||  %d, %d  || ", return_index(i), return_index(j));
		}
		printf("\n");
	}
}
