#include <stdio.h>
#include <stdlib.h>


int
to_binary(int number)
{
	int final = 0, pos = 1;
	printf("recibido en decimal: %d\n", number);
	while (number > 0) {
		final += pos * (number % 2);
		pos *= 10;
		number /= 2;
	}
	return final;
}


int
main(void)
{
	int base, num, final_num = 0, decimal = 0, pos = 1;
	char base_getter;

	scanf("< %[2-9] >%02d", &base_getter, &num);
	base = (int) base_getter - '0';

	printf("base: %d, num: %d\n", base, num);
	
	while (num > 0) {
		decimal += pos * (num % base);
		num /= 10;
		pos *= base;
	}

	final_num = to_binary(decimal);

	printf("%d\n", final_num);


	return 0;
}





// Escribir un programa que convierta enteros de una base a otra. Los números entre y después de los símbolos '<' y '>' indican la base de entrada
// y de salida respectivamente. Dichos números serán decimales entre 2 y 10.
// Ejemplo: la cadena de entrada < 5 > 2  indica que leerá números enteros en base 5 y los imprimirá en su equivalente binario. Luego, si se ingresa 41 se lo deberá pasar a 10101.
