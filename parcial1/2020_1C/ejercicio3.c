#include <stdio.h>
#define FILS 3
#define COLS 6

void
interseccion(const int matriz1[FILS][COLS], const int matriz2[FILS][COLS], int m3[FILS][COLS])
{
	int matriz_auxiliar[FILS][COLS];
	int aux_counter = 0, condicion = 0;
	int final_length = FILS * COLS;
	
	// copio la matriz 2 en una auxiliar
	for (int i = 0; i < FILS; i++) {
		for (int j = 0; j < COLS; j++) {
			matriz_auxiliar[i][j] = matriz2[i][j];
		}
	}

	for (int k = 0; k < FILS; k++) {
		for (int l = 0; l < COLS; l++) {
			// busco el valor en la matriz
			for (int m = 0 ; m < FILS; m++) {
				for (int n = 0; n < COLS; n++) {
					if (matriz1[k][l] == matriz_auxiliar[m][n]) {
						condicion = 1;
						matriz_auxiliar[m][n] = -1;
					}
				} 			
			}
			if (condicion != 0) {
				m3[0][aux_counter++] = matriz1[k][l];
			}
			condicion = 0;
		}
	}

	if ( aux_counter < final_length) {
		for ( ; aux_counter < final_length; aux_counter++ ) {
			m3[0][aux_counter] = 0;
		}
	}

}


int main(void) {
    int m1[FILS][COLS] = {     { 1, 2, 3, 4, 5, 6}, 
	{ 2, 1, 2, 1, 3, 1}, 
	{10, 9, 4, 3,10, 5}};
    int m2[FILS][COLS] = {     { 6, 2, 1, 4, 5, 3},
	{ 1, 1, 2, 3, 3, 1},
	{ 1,19, 7, 8, 1,15}};
    int m3[FILS][COLS];

    interseccion(m1, m2, m3);

    // m3 puede quedar como  { {1, 2, 3, 4, 5, 6}, 
//                   {2, 1, 3, 0, 0, 0}, 
//                   {0, 0, 0, 0, 0, 0} }
    for (int i = 0; i < FILS; i++ ) {
	for (int j = 0; j < COLS; j++) {
		printf("%d, ", m3[i][j]);
	}
	printf("\n");
   }

    return 0;
}

