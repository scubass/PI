#include <stdio.h>

int
main(void)
{
	int edad = 25;
	float longitud = 185.654;
	char letra = 'Z';


	printf("%-5d\n", edad);
	printf("%10d\n", edad);
	printf("%10.2f\n", longitud);
	printf("%8i\n", letra);
}
// 25   
//         25
//     185.65
//       90
