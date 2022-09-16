#include <stdio.h>
#include <assert.h>

#define DIM 9

int check_box(char m[][DIM], int line, int column);
int check_line(char m[][DIM], int line);
int check_column(char m[][DIM], int column);
int chequearSudoku(char m[][DIM]);

int main(void) {
  // Una matriz vacía no es solución
  char sudoku[DIM][DIM] = {{0}};

  assert(chequearSudoku(sudoku)==0);

  char sudoku2[DIM][DIM] = {
        {3,8,1,9,7,6,5,4,2}, 
        {2,4,7,5,3,8,1,9,6},
        {5,6,9,2,1,4,8,7,3},
        {6,7,4,8,5,2,3,1,9},
        {1,3,5,7,4,9,6,2,8},
        {9,2,8,1,6,3,7,5,4},
        {4,1,2,6,8,5,9,3,7},
        {7,9,6,3,2,1,4,8,5},
        {8,5,3,4,9,7,2,6,1}
  };

  assert(chequearSudoku(sudoku2)==1);
  
  char sudoku3[DIM][DIM] = {
        {2,8,1,9,7,6,5,4,2}, 
        {3,4,7,5,3,8,1,9,6},
        {5,6,9,2,1,4,8,7,3},
        {6,7,4,8,5,2,3,1,9},
        {1,3,5,7,4,9,6,2,8},
        {9,2,8,1,6,3,7,5,4},
        {4,1,2,6,8,5,9,3,7},
        {7,9,6,3,2,1,4,8,5},
        {8,5,3,4,9,7,2,6,1}
  };

  assert(chequearSudoku(sudoku3)==0);
  
  // Cuando se tomó este ejercicio en un parcial, en una de las respuestas
  // sólo chequeaban que la suma de cada fila, columna y cuadrado fuera 45
  char sudoku4[DIM][DIM] = {
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}, 
        {5,5,5,5,5,5,5,5,5}
  };

  assert(chequearSudoku(sudoku4)==0);

  char sudoku5[DIM][DIM] = {
        {3,8,1,9,7,6,5,4,12}, 
        {2,4,7,5,3,8,1,9,6},
        {5,6,9,2,1,4,8,7,3},
        {6,7,4,8,5,2,3,1,9},
        {1,3,5,7,4,9,6,2,8},
        {9,2,8,1,6,3,7,5,4},
        {4,1,2,6,8,5,9,3,7},
        {7,9,6,3,2,1,4,8,5},
        {8,5,3,4,9,7,2,6,1}
  };

  assert(chequearSudoku(sudoku5)==0);
  puts("Todo ok señor Sudoku listo\n");

  return 0;
}



int
chequearSudoku(char m[][DIM])
{
	int suma_condiciones = 3;
	int condicion1 = 1, condicion2 = 1, condicion3 = 1;
	for (int i = 0; i < DIM && suma_condiciones == 3; i++) {
		condicion2 = check_line(m, i);
		for (int j = 0; j < DIM && suma_condiciones == 3; j++) {
			// condicion1 = check_box(m, i, j);
			condicion2 = check_line(m, i);
			condicion3 = check_column(m, j);
			suma_condiciones = condicion1 + condicion2 + condicion3;
		}
	}
	return suma_condiciones == 3;
}


// dado que estánp ordenados los números uso un vector y aprovecho a 
// usarlos como indicies
int
check_box(char m[][DIM], int line, int column)
{
	int row = (line / 3) * 3;
	int col = (column / 3) * 3;
	int aux[9] = {0};
	int condicion = 1;
	for (int i = row; i < (row + 3) && condicion != 0; i++) {
		for (int j = column; j < (col + 3) && condicion != 0; j++) {
			// le resto 1 por que van del 1 al 9 los números
			if (aux[m[i][j] - 1] != 0) {
				condicion = 0;
			} else {
				aux[m[i][j] - 1] = m[i][j];
			}
		}
	}
	return condicion;
}

// misma idea que antes pero para filas
int
check_line(char m[][DIM], int line) {
	int condicion = 1;
	int aux[9] = {0};

	for (int i = 0; i < DIM && condicion != 0; i++) {
		if ((aux[ m[line][i] - 1]) != 0) {
			condicion = 0;
		}
		else {
			aux[ m[line][i] - 1]++;
		}
	}
	return condicion;
}

int
check_column(char m[][DIM], int column) {
	
	int condicion = 1;
	int aux[9] = {0};

	for (int i = 0; i < DIM && condicion != 0; i++) {
		if ((aux[ m[i][column] - 1]) != 0) {
			condicion = 0;
		}
		else {
			aux[ m[i][column] - 1]++;
		}
	}

	return condicion;
}



