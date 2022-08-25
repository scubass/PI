#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "getnum.h"
#include <assert.h>

int decimal_to_hex(int);
int length(int);
int decimal_to_binary(int);
int decimal_to_hex (int);
int binary_to_decimal(int);
int menu(void);
int try(int);


int
main (void)
{
	menu ();
	int choice = getint("Opción deseada: ");
	while (choice != 0) {
		int number = getint("Introduzca un número: ");
		if (choice == 1) {
			decimal_to_binary(number);
		}
		else if (choice == 2) {
			// decimal_to_hex(number);	
			try(number);
		}
		else {
			binary_to_decimal(number);
		}
		choice = getint("Opción deseada: ");
	}
	printf("Terminando el juego gracias por jugar\n");
	return 0;
}

int
length(int number)
{
	number = abs(number);
	int count = 0;
	while (number != 0) {
		count++;
		number /= 10;
	}

	return count;
}

int
decimal_to_binary(int number)
{
	if (isalnum(number) == 1) {printf("Please input a number\n"); return -1;}
	int binary = 0;
	int position = 1;
	while (number != 0) {
		binary += (number % 2) * position;
		position *= 10;
		number /= 2;
	}
	printf("%d\n", binary);

	return 0;
	
}


int
decimal_to_hex (int number)
{
	char arr[3];
	int i = 0;
	while (number != 0) {
		if (number % 16 > 9) {
			arr[i] = (number % 16) + 'A' - 10;
			// putchar(number % 16 + 'A' - 10);
			
		}
		else {
			arr[i] =  (number % 16) + '0';
			// putchar(number % 16 + '0');
		}
		number /= 16;
		i++;
	}

	printf("\n");
	printf("%s\n", arr);
	return 0;
}

int
binary_to_decimal(int number)
{
	int decimal = 0;
	int position = 1;
	while (number != 0) {
		decimal += number % 10 * position;
		number /= 10;
		position *= 2;
	}
	printf("%d\n", decimal);
	return 0;
}

int
menu(void) 
{
	printf("MENU\n");
	printf("1) decimal a binario\n");
	printf("2) decimal a hexadecimal\n");
	printf("3) binario a decimal\n");
	return 0;
}

int
try(int number)
{
	int remainder;
	char arr[50];
	int i = 0;

	while (number != 0) {
		remainder = number % 16;
		if (remainder > 9) {
			remainder += 'A' - 10;
		}
		else {
			remainder += '0';
		}
		arr[i] = remainder;
		i++;
		number /= 16;
	}

	for (i = i - 1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}
