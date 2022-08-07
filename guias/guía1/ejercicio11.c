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
	return 0;
}

// el #include <archivo> tira error por q es el mismo archivo
// ./a.out < archivo.txt toma lo q está en el archivo .txt y se lo ppasa al archivo de c
// y ./a.out < archivo.txt > out.txt hace lo mismo que ./a.out < archivo.txt pero manda lo q 
// devuelve el archivo a out.txt
