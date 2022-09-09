#include <stdio.h>
#include <stdlib.h>
int pertenece(int  v[], int number, int dim);
int longString(char * str);

// en un vector los elementos están todos continuos en memoria
// en el caso de v, 1 2 3 4 y también ptr q por el stack se le pega a la derecha y queda
// 1 2 3 4 ptr
// saltando por la cantidad de bytes q tienen el tipo del vector

int
main(void){
	// int v[2][2] = {
	// 	{1, 2},
	// 	{3, 4}
	// };
	//
	// int * ptr = v[0];
	// printf("%d\n", *ptr);
	// printf("%d\n", *(ptr + 1));
	// printf("%d\n", *(ptr + 2));
	// printf("%d\n", *(ptr + 3));
	// int * null_ptr = NULL;
	// printf("%p\n", (void *) &null_ptr);
	// int vec[2] = {1, 2};
	// printf("%d\n", pertenece(vec, 6, 2));
	// float *p, arreglo[] = {1.2, 4.2, 6.6};
	// p = arreglo;
	// (*p)++;
	// printf("%p\n%g\n", p, *p);
	printf("%d \n", longString("hola"));
	return 0;
}

int
pertenece(int v[], int number, int dim)
{
	int condicion = 0;
	for (int * ptr = &v[0] ; ptr < v + dim && condicion == 0; ptr++) {
		if (*ptr == number) {
			condicion = 1;
		}
	} 
	return condicion;
}

int
longString(char * str) {
	int counter = 0;
	for (char * ptr = str; *ptr != '\0'; ptr++) {
		counter++;
	}
	return counter;
}

