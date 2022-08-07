#include <stdio.h>

#include "../getnum2.c"

int conversion_horaria(int x);

int 
main(void) 
{

	int segundos = getint("Introduzca los segundos\n");

	conversion_horaria(segundos);
	// horas = segundos / 3600;
	// segundos = segundos % 3600;
	// minutos = segundos / 60;
	// segundos = segundos % 60;
	// printf("horas: %02d minutos: %02d segundos: %02d\n", horas, minutos, segundos);
	return 0;
}


int
conversion_horaria(int tiempo_en_segundos)
{
	int horas, minutos;

	horas = tiempo_en_segundos / 3600;
	tiempo_en_segundos %= 3600;
	minutos = tiempo_en_segundos / 60;
	tiempo_en_segundos %= 60;
	
	printf("%02d:%02d:%02d\n", horas, minutos, tiempo_en_segundos);
	return 0;


}
