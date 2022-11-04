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

float raizNR(float valor_anterior, int iter, float x) {
	if (iter == 0) {
		return valor_anterior;
	}
	return raizNR(( valor_anterior + x / valor_anterior ) / 2,iter - 1, x);
}
