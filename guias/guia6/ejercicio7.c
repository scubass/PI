#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
int unirArreglos ( const int ar1[], const int ar2[], int resultado[]);


void check(const int v1[], const int v2[]) {
  int i;
  for(i=0; v1[i] != -1; i++)
     assert(v1[i]==v2[i]);
  assert(v1[i]==-1);
  assert(v2[i]==-1);
}
//
// int main(void) {
//   int v1[] = { 1, 5, 15, 30, 35, 45, 55, -1};
//   int v2[] = {-1};
//   int v3[] = { 1, -1};
//   int v4[] = { 2, 3, 15, 16, 33, 35, 45, 65, -1};
//   // int dimRes;
//   int res[30];
//
//   unirArreglos(v1, v2, res);
//   check(v1, res);
//
//   unirArreglos(v2, v2, res);
//   check(v2, res);
//
//   unirArreglos(v1, v1, res);
//   check(v1, res);
//
//   unirArreglos(v1, v3, res); // primer fallo
//   check(v1, res);
//
//   int expected[] = {1, 2, 3, 5, 15, 16, 30, 33, 35, 45, 55, 65, -1};
//   unirArreglos(v1, v4, res);
//   check(expected, res);
//
//   printf("OK!\n");
//   return 0;
// }
int
main() {
	int v1[] ={1, 2, 3, 4, 7, -1};
	int v2[] = {3, 4, 5, 6, 7, 8, -1};
	int res[20];
	int index = unirArreglos(v1, v2, res) + 1;
	for (int i = 0; i < index; i++) {
		printf("%d\n", res[i]);
	}
	return 0;
}


int
unirArreglos ( const int ar1[], const int ar2[], int resultado[])
{
	int i, h, j, index, repetido = 0;
	// cargo ar1 en resultado
	for (i = 0; ar1[i] != -1; i++) {
		resultado[i] = ar1[i];
	}
	// ahora voy a iterar a través de ar2 y veo si algún elemento no está en resultado lo agrego.
	index = i;

	for (h = 0; ar2[h] != -1; h++) {
		for (j = 0; j < i && repetido != 1; j++) {
			if (ar2[h] == resultado[j]) {
				repetido = 1;
			}
		}

		// si no encontré el número en reresultado lo agrego
		if (repetido != 1) {
			resultado[index] = ar2[h];
			index++;
		}
	}
	resultado[index] = -1;
	return index; 

}








// Hacer una función que reciba dos parámetros de entrada representando arreglos de números enteros positivos,
// ordenados en forma ascendente y sin elementos repetidos. El último elemento de cada arreglo es -1. La función debe
// devolver en un tercer parámetro de salida un arreglo ordenado con la unión de los dos primeros, también terminado en -1.
// Ejemplo: Dados v1 y v2 arreglos de enteros, se espera que la unión sea:
// v1 = {1,2,3,-1} y v2 = {2,3,4,-1} → unión = {1,2,3,4,-1}.
// v1 = {1,2,3,-1} y v2 = {1,2,3,-1} → unión = {1,2,3,-1}.
