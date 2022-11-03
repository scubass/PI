#define N 4
#include <stdio.h>
#include <string.h>

int
es_magica(const int vector[N][N]) 
{
	int suma = 0, suma_filas = 0, suma_cols = 0, condicion = 1;
	// como voy a comparar siempre la suma, la guardo en una variable auxiliar
	for (int h = 0; h < N; h++) {
		suma += vector[0][h];
	}

	// cero un vector auxiliar en donde voy a ir contando repeticiones de los numeros q encuentro
	// si en la posicion correpondiente a ese numero no hay un 0 --> ya lo vi y esta repetido asi
	// que corto por q la matriz no es magica
	int vec_aux[N * N] = {0};
	
	for (int i = 0 ; i < N && condicion != 0; i++) {
		for (int j = 0; j < N && condicion != 0; j ++) {
			suma_filas += vector[i][j];
			suma_cols += vector[j][i];
			

			if (vec_aux[vector[i][j] - 1] == 1 ) {
				condicion = 0;
			}
			vec_aux[vector[i][j] - 1]++;			
		}
		if (suma_filas != suma || suma_cols != suma) {
			condicion = 0;
		}
		suma_filas = 0;
		suma_cols = 0;

	}
	
	return condicion;
}
			
int
mcd(int num1, int num2)
{
	int aux;
	if (num1 < num2) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	
	if (num2 == 0) {
		return num1;
	}
	else {
		return mcd(num1 % num2, num2);
	}
}
				
int
main(void)
{
	int vector[N][N] = {
		{ 16, 4, 5, 10},
		{11, 2, 3, 6},
		{12, 9, 13, 15},
		{7, 8, 1, 14}
	};
	char * str = "aeiouAEIOU";
	int n1;
	if (strchr(str, 'A')) {
		n1 = 1;
	} 
	else { 
		n1 = 0;
	}
	printf("%d\n\n es vocal ?: %d\n", es_magica(vector), n1);
	printf("mcd entre 21 y 3: %d\n", mcd(21, 3));
	return 0;	
}
