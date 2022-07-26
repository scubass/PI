#include "../getnum.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

unsigned long separate_ip(unsigned long ip, unsigned char bitsNet);


int
main (void)
{
	separate_ip(0x10FF1112 , 24);
	return 0;
}

unsigned long
separate_ip(unsigned long ip, unsigned char bitsNet)
{
	unsigned long red, host;
	unsigned long red_mask = pow(2, 32 - bitsNet) - 1;
	unsigned long host_mask = pow(2, bitsNet) - 1;
	
	host = ip & host_mask;
	red = ip & red_mask;

	// unsigned long byte_4 = red & 255;
	// red >>= 8;
	// unsigned long byte_3 = red & 255;
	// red >>= 8;
	// unsigned long byte_2 = red & 255;
	// red >>= 8;
	// unsigned long byte_1 = red & 255;
	// printf("%lu.%lu.%lu.%lu\n", byte_1, byte_2, byte_3, byte_4);
	
	printf("red: %lu\nhost: %lu\n", red, host);
	
	unsigned long byte1 = host & 255;
	host >>= 8;
	unsigned long byte2 = host & 255;
	host >>= 8;
	unsigned long byte3 = host &  255;
	host >>= 8;
	unsigned long byte_4 = host & 255;
	printf("%lu.%lu.%lu.%lu\n", byte1, byte2, byte3, byte_4);

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
