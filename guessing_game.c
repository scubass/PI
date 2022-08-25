#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "guias/getnum.h"

int binary_search(int, int);
int game(void);

int
main(void)
{
	game();
	return 0;
}


int
game(void)
{
	int guess, rand_num;
	
	srand(time(NULL));
	
	rand_num = rand() % 100;

	do {
		guess = getint("Ingrese un número del 1 al 100: ");

		binary_search(rand_num, guess);

	} while (guess != rand_num);



	return 0;
}


int
binary_search(int random_number, int guess)
{
	if (guess > random_number) {
		
		printf("El número ingresado es mayor al secreto\n");
	
	} else if (guess < random_number) {

		printf("El número es menor al secreto\n");
	} else {
		printf("Usted ha ingresado el número correcto felicitaciones ha ganado\n");
	}
	return 0;

}
