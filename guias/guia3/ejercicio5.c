#include <stdio.h>

int
main(void)
{
	int a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	if (a > 'A' && a <= 'Z' && a != 'E' && a != 'I' && a != 'O' && a != 'U')
	printf("El caracter %c es una consonante mayúscula \n", a);
	else
	if (a > 'a' && a <= 'z' && a != 'e' && a!= 'i' && a != 'o' && a != 'u')
	printf("El caracter %c es una consonante minúscula \n", a);
	else
	if ((a >= 'A' && a < 'Z') || (a >= 'a' && a <= 'z'))
	printf("El caracter %c es una vocal \n", a);
	else
	printf("El caracter %c no es una letra \n", a);
	if ( b % 2 == 0 )
	printf("El valor ASCII de %c es par \n", b);
	if (b >= '0' && b < '9' && b % 2 == 0)
	printf("El caracter %c representa un dígito par \n", b);
	if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || (c >= 'A' && c <= 'Z')))
	printf("El caracter %c es una vocal o es mayúscula \n", c);
	if (c >= 'a' && c <= 'z')
	printf("El caracter %c no es una vocal pero es letra \n", c);
}


// Completar las condiciones para que el siguiente fragmento de código imprima el texto
// correcto (considerar solo el alfabeto inglés)
