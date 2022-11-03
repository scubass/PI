#include "complexADT.h"
#include <stdlib.h>
#include <stdio.h>

struct complexCDT {
	float x, i;
};

typedef struct complexCDT * complexADT;

complexADT
set_num(float x, float i)
{
	complexADT ans = malloc(sizeof(*ans));
	ans->i = i;
	ans->x = x;
	return ans;
}

float
get_real(complexADT c_num)
{
	return c_num->x;
}

float
get_imag(complexADT c_num)
{
	return c_num->i;
}

complexADT
sum_complex(complexADT num1, complexADT num2)
{
	complexADT ans = malloc(sizeof(*ans));
	ans->i = num1->i + num2->x;
	ans->x = num1->x + num2->x;
	return ans;
}
