#include <stdio.h>
int dcm(int num1, int num2);
int gcd(int num1, int num2);

int
main(void)
{
	printf("mcd entre %d y %d : %d\n", 100, 99, dcm(100, 99));
	printf("%d\n", gcd(100, 99));
	return 0;
}

int
dcm (int a, int b)
{
	int auxi;
	// Asumo que a > b

	while (auxi != 0) {
		auxi = b;
		b = a % b;
		a = auxi;
	}
	return a;
}

// parece que si a > b => la función devuelve a

int
gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
 }
