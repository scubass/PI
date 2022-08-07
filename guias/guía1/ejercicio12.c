#include "ejercicio12.h"

int
main(void)
{
	int i = FALSE;
	int j = TRUE;
	return 0;
}

// output de gcc ejercicio12 -E, preprocesamiento
// # 0 "ejercicio12.c"
// # 0 "<built-in>"
// # 0 "<command-line>"
// # 1 "/usr/include/stdc-predef.h" 1 3 4
// # 0 "<command-line>" 2
// # 1 "ejercicio12.c"
// # 1 "ejercicio12.h" 1
//
//
//
// float nada(void);
// # 2 "ejercicio12.c" 2
//
// int
// main(void)
// {
//  int i = ! 1;
//  int j = 1;
//  return 0;
// }
