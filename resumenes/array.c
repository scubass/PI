#include "../guias/getnum.h"
#include <stdio.h>
#define DIM 50
int readArray(float array[]);

int main(void) {
  float v[DIM];
  int counter = readArray(v);
  for (int i = 0; i < counter; i++) {
    printf("%f\n", v[i]);
  }
  return 0;
}

int readArray(float array[]) {
  float number;
  int counter = 0;
  while (((number = getfloat("Ingrese un número float")) > 0) &&
         counter != DIM) {
    array[counter] = number;
    counter++;
  }

  return counter;
}

int
eliminar(const int arr[], int dim, int new_arr[])
{
	int j = 0;
	for (int i = 0; i < dim; i++) {
	if (arr[i] != 0) {
		new_arr[j] = arr[i];
		j++;
	}

	}

	return j;
}
