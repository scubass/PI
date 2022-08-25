#include <stdio.h>
#include <math.h>
int factorial(int);
double serie (double);

int
main(void)
{
	printf("con x = 1, %f\n", serie(1));
	printf("con x = 2, %f\n", serie(2));
	printf("con x = 3, %f\n", serie(3));
	return 0;
}

double
serie (double x)
{
	int j = 1;
	for (int i = 1; i < 15; i++) {
		j += (double) pow((double) x, i) / factorial(i);	
	}	
	return j;
}

int
factorial ( int num )
{
	return (num == 0) ? 1 : num * factorial (num - 1);
}


