#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int eliminaRepetidos(const int arr[], int dimOrig, int resultado[]);

int main(void) {
  int v[] = { 3, 5, 1, 3, -3, 3, 5, 1};
  int res[20];
  int dimRes;

  dimRes = eliminaRepetidos(v, 0, res);
  assert(dimRes==0);

  dimRes = eliminaRepetidos(v, 1, res);
  assert(dimRes==1);
  assert(res[0]==3); // primer fallo, arreglado

  dimRes = eliminaRepetidos(v, 2, res);
  assert(dimRes==2);
  assert(res[0]==3);
  assert(res[1]==5);

  dimRes = eliminaRepetidos(v, 4, res);
  assert(dimRes==3); // segundo fallo, está bien el test?
  assert(res[0]==3); // si tomo los primeros 4 queda sin repetir {5, 1} y son 2 no 3, mi función elimina todo valor q se repita no solamene los repetidos
  assert(res[1]==5);
  assert(res[2]==1);


  dimRes = eliminaRepetidos(v, 8, res);
  assert(dimRes==4);
  assert(res[0]==3);
  assert(res[1]==5);
  assert(res[2]==1);
  assert(res[3]==-3);

  for (int a = 0; a < 20; a++) {
  	res[a] = -1;	
  }

  for (int i=0; i < 8; i++)
     v[i] =10;
  dimRes = eliminaRepetidos(v, 8, res);
  assert(dimRes==1);
  assert(res[0]==10);

  for (int i=0; i < 8; i++)
     v[i] =i;
  dimRes = eliminaRepetidos(v, 8, res);
  assert(dimRes==8);
  for (int i=0; i < 8; i++)
    assert(res[i]==i);

  puts("OK!");
  return 0;
}

int
eliminaRepetidos(const int arr[], int dimOrig, int ordered_arr[])
{
	int j, i, index = 0, condicion = 1;
	for (j = 0; j < dimOrig; j++) {
		for (i = 0 ; i < dimOrig; i++) {
			if (arr[j] == ordered_arr[i] && i != j) {
				condicion = 0;
			}
		}

		if (condicion != 0) {
			ordered_arr[index] = arr[j];
			index++;
		}
		condicion = 1;
	}
	return index;
}

// Duda sobre el tema de resetear el vector.
// Escribir una función que reciba un vector desordenado de números enteros y su dimensión, y construya otro
// vector eliminando los valores repetidos. La función deberá retornar en su nombre la dimensión del nuevo vector (La
// función solicitada no debe superar las 10 líneas).
