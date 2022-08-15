#include <stdio.h>
#include "../getnum2.c"
#define EPSILON 'a' - 'A'
int menu( void );
int mayuscula_a_minuscula (int);
int minuscula_a_mayuscula (int);
int siguiente_caracter (int);
int siguiente_letra_circular(int);

int
main(void)
{
	menu();
	return 0;
}


int
mayuscula_a_minuscula (int caracter)
{
	if (caracter >= 'A' && caracter <= 'Z') {caracter += (EPSILON);} else {return 1;}
	printf("%c\n", caracter);
	return 0;
}

int
minuscula_a_mayuscula (int caracter)
{
	if (caracter >= 'a' && caracter <= 'z') {caracter -= (EPSILON);} else {return 1;}
	printf("%c\n", caracter);
	return 0;
}

int
siguiente_caracter (int caracter)
{
	printf("%c\n", caracter + 1);
	return 0;
}

int
siguiente_letra_circular (int caracter)
{
	printf("%c\n", (caracter == 'z') ? 'a' : caracter + 1);	
	return 0;
}


int
menu (void)
{
	printf("1) Convertir de mayúsucla a minuscula\n");
	printf("2) Convertir de minuscula a mayúsucla\n");
	printf("3) Imprimir el siguiente caracter\n");
	printf("4) Imprimir el siguiente en forma circular\n");
	int opcion = getint("Ingrese la opcion deseada:  ");
	printf("Ingrese el caracter: ");
	int carac = getchar();
	switch (opcion) {
		case 1: mayuscula_a_minuscula(carac);
			break;
		case 2: minuscula_a_mayuscula(carac);
			break;
		case 3: siguiente_caracter(carac);
			break;
		case 4: siguiente_letra_circular(carac);
			break;
		default: printf("Ingresó una opción invalida\n");
			break;
	}

	return 0;
}
