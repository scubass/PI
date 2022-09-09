#include <stdio.h>
void swap(int *num1, int *num2);
void convertir_tiempo(int *hora, int *minutos, int *segundos);

int
main(void)
{
	int number = 100;
	int * p_number = &number;
	printf("p_number: %p\n", (void *) p_number);
	printf("desreferenciado: %d\n", *p_number);
	*p_number = 5;
	printf("si cambio lo que hay en *p_number, cambia la variable: %d\n", *p_number);
	int num1 = 10;
	int num2 = 5;
	printf("num1: %d, num2: %d\n", num1, num2);
	swap(&num1, &num2);
	printf("num1: %d, num2: %d\n", num1, num2);
	int segundos = 3810;

	int h, m;

	convertir_tiempo(&h, &m, &segundos);
	printf("horas: %d, minutos: %d, segundos: %d\n", h, m, segundos);

	return 0;
}

void
swap(int *num1, int *num2)
{
	int aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}

void
convertir_tiempo(int *hora, int *minutos, int *segundos)
{
	*hora = (*segundos) / 3600;
	*segundos %= 3600;
	*minutos = (*segundos) / 60;
	*segundos %= 60;
}
