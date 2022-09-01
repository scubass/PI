#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#define ARRAY_SIZE 4
#define EPSILON 0.000001
double maxDiferencia(const double arr[]);
int length(const int arr[]);

int main(void) {

  double v[] = {1.0, 0.0};
  assert(fabs(maxDiferencia(v))==0.0);

  double v2[] = {1.0, 1.0, 1.0, 0.0};
  assert(fabs(maxDiferencia(v2))==0.0);

  double v3[] = {1.5, 3.0, -1.0, 0.0};
  assert(fabs(maxDiferencia(v3) - 4.0) < EPSILON);

  double v4[] = {1.5, 3.0, 4.5, 3.0, 0.0};
  assert(fabs(maxDiferencia(v4) -1.5) < EPSILON);

  double v5[] = {2.5, 1.0, 1.5, 2.0, 0.0};
  assert(fabs(maxDiferencia(v5)- 1.5) < EPSILON );

  double v6[] = {1.5,  -1.0, 3.0, 0.0};
  assert(fabs(maxDiferencia(v6) - 4.0) < EPSILON);

  puts("Todo OK!");
  return 0;
}



double
maxDiferencia(const double arr[]) 
{
	
	int length = 0;

	for (int i = 0; arr[i] != 0; i++) {
		length++;
	}

	if (length == 1) {
		return 0;
	}
	
	double difference = fabs(arr[1] - arr[0]);
	double aux_difference;

	if (length == 2) {
		return difference;
	}

	for (int i = 2; i < length; i++) {
		aux_difference = fabs(arr[i] - arr[i - 1]);
		if (aux_difference > difference) {
			difference = aux_difference; 
		}
	}
	return difference;


}



int
length(const int arr[]) 
{

	int i;
	for (i = 0; arr[i] != 0; i++) {
	
	}

	return i;
}

// Dado un arreglo lineal de números reales, cuyo indicador de fin de elementos es cero, escribir una función para
// obtener la mayor diferencia entre dos elementos consecutivos. (En no más de 5 líneas). Tener en cuenta que los números
// pueden ser negativos. En caso de que el vector tenga un solo elemento deberá retornar como diferencia el valor cero.
