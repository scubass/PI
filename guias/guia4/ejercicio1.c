#include <stdio.h>
#define PI 3.1415

#define CUBO(x) x * x * x

int cubo(int num);

int
main(void)
{
	int a = 0;
	int b;
	b = PI + a++;

	printf("item a\n");
	printf("a: %d, b: %d\n", a, b);
	

	printf("item b\n");
	

	float c = 0;
	float d;
	d = c + PI + 1;
	printf("c: %f, d: %f\n", c, d);
	
	
	printf("item c\n");

	int e = 4, f, g;
	f = CUBO(e + 1);
	g = cubo(e + 1);

	printf("CUBO f: %d, cubo g: %d\n", f, g);


	return 0;

}

int
cubo ( int num )
{
	return num * num * num;
}










// a) la variable a = 1, b = 3, pues hace 3.1415 + 0 y eso lo castea a int, luego se suma 1 a a
// b) la variable c = 0.0, d = 3.1415, PI++ da error por q no podemos modificar una cte simbolica
// c) la variable f = 13 y g = 125, siendo cubo la función correcta, CUBO debe de estar mal por q le pasamos e + 1 y es una suma, por lo cual hace e + 1 * e + 1 * e + 1 = 4 * 3 + 1 = 12
