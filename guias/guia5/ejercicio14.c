#include "../getnum.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
unsigned long identify_ip(unsigned long ip, unsigned char bitsNet);
int decimal_to_binary(int);
int binary_to_decimal(int);

int
main (void)
{
	identify_ip(1921680100, 23);
}

unsigned long
identify_ip (unsigned long ip, unsigned char bitsNet)
{
	unsigned long b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	int counter = 0;
	int position = 1;
	printf("ip: %lu\n", ip);
	while (counter < 8) {
		b4 += (ip % 2) * position;
		position *= 10;
		counter++;
		ip /= 2;
	}
	counter = 0;
	while (counter < 8) {
		b3 += (ip % 2) * position;
		position *= 10;
		counter++;
		ip /= 2;
	}
	counter = 0;
	while (counter < 8) {
		b2 += (ip % 2) * position;
		position *= 10;
		counter++;
		ip /= 2;
	}
	counter = 0;
	while (counter < 8) {
		b1 += (ip % 2) * position;
		position *= 10;
		counter++;
		ip /= 2;
	}
	printf("%d\n", decimal_to_binary(b1));
	printf("%d\n", decimal_to_binary(b2));
	printf("%d\n", decimal_to_binary(b3));
	printf("%d\n", decimal_to_binary(b4));
	return 0;
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







// Un número IP identifica en una red TCP/IP a un host particular (puede ser una computadora,
// impresora, router, cámara de seguridad, etc.). Todo número IP está compuesto de 32 bits, donde parte de ese
// número (una cantidad arbitraria de bits a la izquierda del número) identifica la red a la que pertenece y el
// resto de los bits identifican al host. Si bien el número se almacena como un entero sin signo de 4 bytes, se lo
// presenta al usuario en 4 grupos de números decimales
// Escribir una función que reciba:
// ● ip: unsigned long con el número IP de un host
// ● bitsNet: unsigned char que indica cuántos bits se utilizan para identificar a la red
// La función debe imprimir en salida estándar el número de red y el número de host correspondientes al
// parámetro ip.
// Ejemplos:
// ip
// 0xC0A80064 (192.168.0.100)
// 0x10FF1112 (16.255.17.18)
// 0x10FF1112 (16.255.17.18)
// 0x10FF1112 (16.255.17.18)
// bitsNet
// 16
// 24
// 23
// 16
// Red
// 192.168.0.0
// 16.255.17.0
// 16.255.16.0
// 16.255.0.0
// Host
// 0.0.0.100
// 0.0.0.18
// 0.0.1.18
// 0.0.17.18
