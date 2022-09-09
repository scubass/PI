#include <assert.h>
#include <stdio.h>
#include <math.h>


/* Simplificación de la fracción representada por num y den */
void simplFrac(int *num, int *den);

/* Calcula la suma de dos fracciones representadas por num1 / den1, num2 / den2 
 * Deja el resultado en numS / denS 
 */
void sumarFrac(int num1, int num2, int den1, int den2, int *mumS, int *denS);

/* Devuelve el máximo común divisor de dos números */
int dcm(int num1, int num2);


int main(void) {
    
    int num1, num2, den1, den2, numS, denS;

    printf("SIMPLIFICAR\n");
    num1 = 10; den1 = 15;
    simplFrac(&num1, &den1);
    assert(num1==2 && den1==3);
    simplFrac(&num1, &den1);
    assert(num1==2 && den1==3);

    num1 = 150; den1 = 15;
    simplFrac(&num1, &den1);
    assert(num1==10 && den1==1);
    simplFrac(&num1, &den1);
    assert(num1==10 && den1==1);
    simplFrac(&den1, &num1);
    assert(num1==10 && den1==1);
    num1 = 12*5; den1 = 36*7;
    simplFrac(&num1, &den1);
    assert(num1==5 && den1==21);
    num1 = 0; den1 = 36;
    simplFrac(&num1, &den1);
    assert(num1==0 && den1==1);

    printf("SUMAR\n");
  
    num1 = 150; den1 = 15;
    num2 = 15; den2 = 5;
    sumarFrac(num1, num2, den1, den2, &numS, &denS);
    assert(numS==13 && denS==1);

    num2 = 7; den2 = 4;
    sumarFrac(num1, num2, den1, den2, &numS, &denS);
    assert(numS==47 && denS==4);

    puts("OK!");
    return 0;
}


int
dcm(int num1, int num2)
{
	int aux;
	if (num1 < num2) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}

	if (num2 == 0) {
		return num1;
	}
	return dcm (num2, num1 % num2);
}


void
simplFrac(int *num, int *den)
{
	int number1 = *num, number2 = *den;
	int mcd = dcm(number1, number2);
	*num /= mcd;
	*den /= mcd;
}

void
sumarFrac(int num1, int num2, int den1, int den2, int *mumS, int *denS)
{

	if (den1 == den2) {
		*mumS = num1 + num2;
		*denS = den1;
	}

	else {
		*mumS = (num1 * den2) + (num2 * den1);
		*denS = den1 * den2;
	}

	simplFrac(mumS, denS);
}





// Reescribir el ejercicio 10 de la práctica 5 de forma tal que quede separado correctamente el front-end del
// back-end.
// Escribir un programa que ofrezca un menú con las siguientes opciones:
// ▪ Simplificar una fracción
// ▪ Sumar dos fracciones
// ▪ Terminar la ejecución
// Si se elige la primera opción se le solicitará numerador y denominador de la fracción y se
// imprimirá la fracción simplificada (algunos de ellos podrían ser negativos). Si se opta por la segunda, se le
// solicitará dos fracciones y se imprimirá la suma de las mismas, también simplificada. Obviamente con la
// tercera opción finaliza la ejecución del mismo. Escribir una función para cada item del menú. (No más de 20
// líneas para main y no más de 10 líneas para las funciones del menú).
// Pista: Escribir y usar la función DivisorComunMaximo.
