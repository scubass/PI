#include <stdio.h>
#include <math.h>
#include <ctype.h>
int parte_b(void);

int
main(void)
{
	int i;
	for (i = 46; i <= 'H'; i++) {
		printf("%d %c %c\t", i, i, tolower(i));
		printf("%s ", isalnum(i) ? "si" : "no");
		printf("%s ", isalpha(i) ? "si" : "no");
		printf("%s ", isdigit(i) ? "si" : "no");
		printf("%s ", islower(i) ? "si" : "no");
		printf("%s ", isupper(i) ? "si" : "no");
		printf("%s ", isxdigit(i) ? "si" : "no");
		printf("%s ", iscntrl(i) ? "si" : "no");
		printf("%s\n", ispunct(i) ? "si" : "no");
	}
	parte_b();
	return 0;
}


int
parte_b(void)
{
	double x;
	for ( x = -1; x < 2; x += 0.5)
	{
	printf("%f %f %f %f\n", x, fabs(x), ceil(x), floor(x));
	printf("%f %f\n", pow(x, 2), pow(x, .5));
	}
	return 0;

}

// cuando usa pow(x, 0.5) y x es < 0 pone NaN(not a number)
