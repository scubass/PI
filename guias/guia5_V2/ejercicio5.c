#include "../getnum.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double potencia(double base, int exponent);
#define EPSILON 0.00001


int
main(void)
{
	assert(potencia(0,0)==-1);
    
	for(int i=-10, j=1; i<10; i++, (i%2==0? j++ : 0)){
        	assert(fabs(potencia(i, j)-pow(i, j))<=EPSILON);
    	}
    	
	assert( fabs(potencia(-2, -4) - pow(-2, -4))<=EPSILON);

    	puts("OK!");
    	return 0;
}

double
potencia(double base, int exponent)
{
	int i;
	double pot = 1;
	int exponent_sign = (exponent > 0) ? 1: -1;

	if ((base < 0 && exponent % 2 == 0 && exponent_sign < 0) || (base == 0 && exponent == 0)) {
		return -1;
	}

	exponent = abs(exponent);
	for (i = 0; i < exponent ; i++ ) {
		pot *= base;
	}

	return (exponent_sign < 0) ? 1 / pot: pot;
}
