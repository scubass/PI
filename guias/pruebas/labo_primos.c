#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include "getnum.h"
int is_prime (signed long long);
int first_n_primes (unsigned long long);

int
main (void)
{
	first_n_primes(1000000000);
	return 0;
}

int
is_prime (signed long long number)
{
	int prime_condition = 1;

	if (number % 2 == 0 || number % 3 == 0) {
		prime_condition = 0;
	} 

	int i;
	for (i = 5; i < sqrt(number) + 1 && prime_condition != 0; i += 2) {
		if (number % i == 0) {
			prime_condition = 0;
		}
	}

	return prime_condition;
}

int
first_n_primes (unsigned long long n)
{
	unsigned long long counter = 0;
	// los casos 2 y 3 que veo por separado los considero en couter
	if (n > 2) {
		printf("2 3 ");
		counter = 2;
	} else if (n == 2) {printf("2 3\n");}

	for(unsigned long long i = 5; counter < n; i += 2)
	{
		if (is_prime(i) != 0) {printf("%llu ", i); counter++;}
	}
	printf("\n");

	return 0;



}
