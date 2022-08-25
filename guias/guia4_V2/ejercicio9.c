#include <stdio.h>
#include <assert.h>

const int ENT_HORA = 4;
const int ENT_MINUTOS = 55;
int llega_temprano(const int, const int);

int
main(void)
{
	printf("%sllego a tiempo, hora : %d, minutos : %d\n", (llega_temprano(3, 40)) ? "" : "No ", 3, 40);
	printf("%sllego a tiempo, hora : %d, minutos : %d\n", (llega_temprano(4, 55)) ? "" : "No ", 4, 55);
	printf("%sllego a tiempo, hora : %d, minutos : %d\n", (llega_temprano(4, 56)) ? "" : "No ", 4, 56);
	assert(llega_temprano(5, 33) == 0);
	assert(llega_temprano(4, 32) == 1);
	puts("Todo ok ");
	return 0;

}


int
llega_temprano ( const int hora, const int minutos)
{
	return ((hora == ENT_HORA && minutos <= ENT_MINUTOS) || (hora < ENT_HORA));
}


// La siguiente función recibe como parámetros de entrada las horas y los minutos que representan el
// momento de ingreso al trabajo de un empleado, y devuelve 1 ( verdadero ) si el empleado llegó a horario y 0
// ( falso ) si llegó tarde. Las constantes ENT_HORA y ENT_MINUTOS están definidas fuera de la función e
// indican el horario esperado de entrada al trabajo. Testearla, y de no funcionar correctamente, corregirla.
