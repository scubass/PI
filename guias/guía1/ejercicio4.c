#include <stdio.h>

// errores:
//         - no inicializa la variable c
//         - faltan los ; 
//         - return statement mal escrito, forma correcta: return 0;
//
//
//
// int 
// main(void) 
// {
// 	int a, b = c = 5
// 	a = b + c
//
//
// 	return: 0
// }


// Version correcta del programa

int 
main(void)
{       int c;
	int a, b  = c = 5;
	a = b + c;
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	return 0;
}
