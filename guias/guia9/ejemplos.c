#include <stdio.h>
#include <string.h>
int
potencia(int number, int power)
{
	if (power == 0) {
		return 1;
	}
	else {
		return number * potencia(number, power - 1);
	}
}

// int
// fibonacci(int number)
// {
// 	if (number == 0 || numero2== 1) {
// 		return number;
// 	}
// 	else {
// 		return fibonacci(number - 1) + fibonacci(number - 2);
// 	}
// }
//
// int
// mcd(unsigned int numero1, unsigned int numero2)
// {
// 	if (numero2 == 0) {
// 		return numero1;
// 	}
// 	else {
// 		return mcd(numero2, numero1 % numero2);
// 	}
// }
//
// int
// mcd_wrapper(unsigned int numero1, unsigned int numero2)
// {
// 	// mcd recursivo funciona para numero1 >= numero2
// 	if (numero1 < numero2) {
// 		aux = numero1;
// 		numero1 = numero2;
// 		numero2 = aux;
// 	}
// 	return mcd(numero1, numero2);
// }

int
mcd(int num1, int num2)
{
	int aux;
	while (num2 != 0) {
		aux = num2;
		num2 = num1 % num2;
		num1 = aux;
	}
	return num1;
}
int
isvowel(char letra)
{
	return (strchr("aeiouAEIOU", letra) != NULL);
}

int
contar_vocales(char * s)
{
	if (s[0] == 0)
	{
		return 0;
	}
	return contar_vocales(s + 1) + isvowel(s[0]);
}

int
is_null(const int vector[], unsigned int dim)
{
	if(dim == 0) {
		return 1;
	}
	else if (vector[dim - 1] != 0) {
		return 0;
	} 
	return is_null(vector, dim - 1);
}

int
main(void)
{
	int vec[] = {9, 3, 2, 3};
	int vec2[] = {0};
	int counter = 0;
	printf("%d\n", contar_vocales("aaa"));
	// printf("%d\n", is_null(vec2, 1));
	// printf("%d\n", is_null(vec, 0));
	// printf("%d\n", potencia(2, 2));
	// printf("mcd: %d\n", mcd(90, 21));
	return 0;
}
