#include <stdio.h>
#include <math.h>
int decimal_to_binary(int);
int bits_in_1(int);

int
main(void)
{
	printf("10 en binario = %d\n", decimal_to_binary(10));
	printf("14 en binario = %d\n", decimal_to_binary(14));
	printf("102 en binario = %d\n", decimal_to_binary(102));
	int binary_10 = decimal_to_binary(10);
	printf("10 en binario = %d\n", binary_10);
	printf("%d\n", bits_in_1(10));

}


int
decimal_to_binary (int number)
{
	int binary = 0, i = 1, remainder = 0;

	while(number != 0)
	{
		remainder = number % 2;
		number /= 2;
		binary += remainder * i;
		i *= 10;
	}

	return binary;
}

int
bits_in_1 (int number)
{
	int counter = 0;
	while (number != 0) {
		counter += number >> 1 & 1;
		number >>= 1;
	}
	return counter;
}
