#include <stdio.h>
#include <stdlib.h>
#include "../../biblioteca/random/random.h"

struct point {
	int x, y;
};
typedef struct point point;

int
condicion(point p, int radio)
{
	return (p.x * p.x + p.y * p.y) >= radio;
}

int
calcular(int radio) {
	point direcciones[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	point p0 = {0, 0};

	int tiempo = 0, rand_dir;

	while (!condicion(p0, radio)) {
		rand_dir = randInt(0, 3);
		p0.x += direcciones[rand_dir].x;
		p0.y += direcciones[rand_dir].y;
		tiempo += 1;
	}
	return tiempo;

}

int
main(void)
{
	int tiempo, relacion_final = 0, counter = 0;
	randomize();
	for (int i = 3; i < 100000; i++) {
		tiempo = calcular(i);
		counter += i;
		relacion_final += tiempo;
		printf("|  radio: %03d  |  tiempo: %05d  |  relacion: %3.4f  |\n", i, tiempo, (float) i / (float) tiempo);
	}

	printf("%f\n", (float) counter / (float) relacion_final);
	return 0;
}
