#include <stdio.h>

// int
// dcm(int num1, int num2)
// {
// 	if (num2 == 0) {
// 		return num1;
// 	}
// 	return dcm (num2, num1 % num2);
// }

int
dcm(int num1, int num2)
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
	return dcm (num2, num1 % num2);
}

void
simplificar(int *num1, int *num2)
{
	int number1 = *num1, number2 = *num2;
	int mcd = dcm(number1, number2);
	*num1 /= mcd;
	*num2 /= mcd;
}

int
main(void)
{
	printf("(10 : 5) = %d\n", dcm(10, 5));
	printf("(21 : 3) = %d\n", dcm(21, 3));
	printf("(21 : 3) = %d\n", dcm(3, 21));
	
	int num1 = 21;
	int num2 = 3;
	simplificar(&num1, &num2);
	printf("21 / 3 simplificado: %d / %d\n", num1, num2);
	return 0;
}
