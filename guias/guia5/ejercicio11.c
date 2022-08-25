#include <ctype.h>
#include <stdio.h>
int consonante_mayus(int);
int consonante_minus(int);
int isvowel(int);
int ej5(int, int, int);

int
main (void)
{
	signed char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	ej5(a, b, c);
}

int
ej5 (int a, int b, int c)
{
	if (isupper(a) && consonante_mayus(a)) {
		printf ("el caracter de %c es una consonante mayúscula \n", a);
	}
	else
	{
		if (islower(a) && consonante_minus(a)) {
			printf ("el caracter de %c es una consonante minúscula\n", a);
		}
		else {
			if (isvowel(a)) {
				printf ("el caracter de %c es una vocal \n", a);
			}
			else {
				printf ("el caracter de %c no es una letra\n", a);
			}
		}
	}

	if (b % 2 == 0) {
		printf("el caracter de %c en la tabla ASCII es par\n", b);
	}
	
	if (isdigit(b) && (b - '0') % 2 == 0) {
		printf ("el caracter de %c representa un dígito par\n", b);
	}
	
	if (isvowel(c) || isupper(c)) {
		printf("el caracter de %c es una vocal o mayúscula\n", c);
	}
	if (isalpha(c) && !isvowel(c)) {
		printf ("el caracter de %c no es una vocal pero es letra\n", c);
	}

	return 0;

}

int
consonante_mayus (int caracter)
{
	return caracter != 'A' && caracter != 'E' && caracter != 'I' && caracter != 'O' && caracter != 'U';
}

int
consonante_minus (int caracter)
{
	return caracter != 'a' && caracter != 'e' && caracter != 'i' && caracter != 'o' && caracter != 'u';
}

int
isvowel(int caracter) {
	return caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' || caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U';
}
