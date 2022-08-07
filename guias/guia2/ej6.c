#include <stdio.h>
# define palabra "última palabra"

int
main(void)
{
	int num1 = 53;
	int num2 = 4;
	float num3 = 6.874;

	printf("num1= %10d\n", num1);
	printf("num2= %010d\n", num2);
	printf("num1= %-10d\n", num1);
	printf("num1 + num2 = %5i\n", num1 + num2);
	printf("num1 + num2 = %5f\n", num1 + num2);
	printf("num3 = %-3.2f\n", num3);
	printf("num1 = %-4d\nnum2 = %-4d\nnum3 = %3.1f\n", num1, num2, num3);
	printf("num3 (como entero) = %d\n", num3);
	printf("num1 / num2 = %d\n", num1 / num2);
	printf("num2 / num1 = %d\n", num2 / num1);
	printf("esta es la %s\n", palabra);


	return 0;

}
//
// num1=         53 %10d 10 dígitos ocupa
// num2= 0000000004 %010d 10 dígitos pero llena con ceros
// num1= 53         %-10d 10 dígitos para la derecha 
// num1 + num2 =    57 %5i signed integer 5 dígitos
// num1 + num2 = 0.000000 %5f float de 5 dígitos
// num3 = 6.87 
// num1 = 53  
// num2 = 4   
// num3 = 6.9
// num3 (como entero) = -91000692
// num1 / num2 = 13
// num2 / num1 = 0
// esta es la última palabra
