#include <stdio.h>

char letra;
void segundo ( void );

int
main(void)
{
	printf( "Inrese un caracter : ");
	letra = getchar();
	segundo();
	printf( " Letra es : %c\n", letra );
	return 0;
}

void
segundo( void )
{
	char letra;
	letra = 'X';
	printf( " letra en el scope de segundo(): %c\n", letra );
	return;
}


// lo mismo que antes, en el scope de main letra es la que ingresa el usuario
