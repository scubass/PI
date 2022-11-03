#include <stdio.h>
#include <assert.h>
#include <math.h>

#define EPSILON 0.01
float raizNR(float valor_anterior, int iter, float x);

int main(void){

    assert(fabs(raizNR(4, 3, 8)-2.833) <= EPSILON);
    assert(raizNR(0, 0, 0) <= EPSILON);
    assert(raizNR(0, 0, 4) <= EPSILON);
    
    printf("OK!\n");
}

float
raizNR(float valor_anterior, int iter, float x)
{
	float valor_aux;
	if (iter == 0) {
		return valor_anterior;
	}
	else {
		valor_aux = (valor_anterior + x / valor_anterior) / 2;
		return raizNR(valor_aux, iter - 1, x);
	}
}
