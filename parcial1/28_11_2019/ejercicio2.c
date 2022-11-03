#include <stdio.h>
#define N 4
#define M 4


int
armarFilas(const int vec_in[N][M], int vec_out[N])
{
	int suma = 0, condicion = 1, pos = 1, idx = 0;
	
	// voy a iterar a traves de todos los elementos del vector de entrada
	for(int i = 0; i < N; i++) {
		for (int j = M - 1; j >= 0 && condicion != 0; j--) {
			// si el numero es mayor a 9 o es negativo apago condicion asi no lo sumo al vector de salida
			// importante para formar el numero en el orden correto tengo que empezar de atras para adelante
			// sino el numero va a estar al reves
			if (vec_in[i][j] < 0 || vec_in[i][j] > 9) {
				condicion = 0;
			}

			suma += vec_in[i][j] * pos;
			pos *= 10;
		}

		// si ningun numero de la fila era menor a 0 o mayor a 9 lo agrego a el vector de salida usando un indice auxiliar para el de salida 
		if (condicion != 0) {
			vec_out[idx++] = suma;
		}

		condicion = 1;
		suma = 0;
		pos = 1;
	}
	// finalmente devuelvo la cantidad de elementos del vector de salida, que es igual al indice que use
	return idx;
}


int
main(void)
{
	int v[N][M] = {
		{16, 3, 2, 13},
		{5, 10, 11, 8},
		{9, 6, 7, 12},
		{4, 15, 14, 1}
	};

	int v_out[N] = {0};

	int v2[N][M] = {
		{1, 3, 2, 5},
		{5, 0, 1, 8},
		{9, 6, 7, 2},
		{4, 5, 4, 1}
	};
	printf("%d\n", armarFilas(v, v_out));
	int dim = armarFilas(v2, v_out);

	for (int i = 0; i < dim ; i++) {
		printf("%d,  ", v_out[i]);
	}
	printf("\n");

	
}
