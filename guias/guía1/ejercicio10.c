#include <stdio.h>

int
main(void)
{
	char letra;
	printf("\nIngrese una letra:");
	letra = getchar();
	if ( letra>='a' && letra <='z')
		printf("\n%c es una letra minúscula\n",letra);
	else
		if ( letra>='A' && letra<='Z')
			printf("\n%c es una letra mayúscula\n",letra);
	return 1;
}

// la tercera opción ./a.out > out.txt manda lo q devuelve el archivo a out.txt
// el programa pide al usuario que ingrese una letra y la comprara con los valores de 'a' y 'z' 
// para ver si lo ingresado por el usuario es una letra minúscula en la tabla ascii
// y luego hace lo mismo para las mayúsculas
// notar que getchar() solamente toma el primer caracter por lo q si ingresamos más de un caracter
// se queda con el primero
