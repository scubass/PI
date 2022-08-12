#include <stdio.h>
int parte_c();
int parte_d();
// int parte_b();

int
main(void)
{
	float x = 1 / 3; // División entre enteros da 0 y casteo a float da 0.0 pero si lo hacemos entre float nunca sale del loop
	while (x != 0.5) { // además nunca llega a 0.52 por q le va sumando de a 0.1, nunca da 0.52 loop infinito
		x +=  0.1;
	}
	parte_c();
	parte_d();
	// parte_b();
	return 0;
}


//
// int
// parte_b(void)
// {
// 	float y;
// 	for (y = 0.1; y != 1.0; y += 0.1) {    // no inicializa la variable y
// 		printf("%f\n", y); 
// 	}
// 	return 0;
// }


int
parte_c(void)
{
	int n = 4; // => ACA ESTÄ EL ERROR, basat inicializar la variable con un valor

	switch (n) {
		case 1:
			printf("El númeo es 1\n");
		case 2:
			printf("El número es 2\n");
			break;
		case 3:
			printf("El número es 3\n");
			break;
		default:
			printf("El número no es ni 1 ni 2 ni 3\n");
			break;
	}
	return 0;
}


int
parte_d(void)
{
	int c, mayor;                // Problema usa int?
	mayor = 0;
	while ((c = getchar()) != EOF) // falta poner parentesís a (c = getchar()) para q se ejecute primero
	{
		if (c > mayor) {
			mayor = c;
		}
	}
	printf("El mayor es %c\n", mayor);
	return 0;
}
