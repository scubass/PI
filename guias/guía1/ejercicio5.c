//errores:
//        - los espacios en el include statement son redundantes
//        - problemas en la max = (i>j? I: j) usa variable I q no está inicializada 
//        - end opcional?
//
//
// #                       include <stdio.h>
//
// int 
// main(void) 
// {
// 	int i, j, max;
// 	i = j = 2;
// 	max = (i>j? I: j );
// 	end
// }

// version correcta del programa
#include <stdio.h>

int 
main(void)
{
	int i, j, max;
	i =  j = 2;
	max = (i>j);
	printf("i: %d, j: %d, %max: %d\n", i, j, max);
}

// dado que max evalua una expresion q es verdadera o falsa, max es o 1(verdadera) o 0(falsa)
