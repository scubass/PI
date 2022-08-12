#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int celcius();
int reverse();
int count_int();
int count_char();
int count_short();


int
main(void)
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("Fahrenheit: %3d Celcius: %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	reverse();
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	celcius();
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	printf("\n");
	count_int();
	printf("\n");
	printf("\n");
	count_char();
	printf("\n");
	printf("\n");
	count_short();
	return 0;
}


int
celcius()
{
	int cel;

	for (cel = LOWER; cel <= UPPER; cel += STEP) {
		printf("Celcius: %3d Fahrenheit: %6.1f\n", cel, cel * 9.0 / 5.0 + 32);
		printf("\n");
	}
	return 0;
}


int
reverse(void) 
{
	int fahr;
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		printf("Fahrenheit: %3d Celcius: %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
		printf("\n");
	}
	return 0;
}

int
count_int(void)
{
	signed int i;

	i = ~0;
	i = ((unsigned int) i) >> 1;
	printf("upper limit: %d\n", i);
	printf("lower limit: %d\n", -i - 1);
	return 0;

}

int
count_char(void)
{
	signed char c;
	c = ~0;
	c = ((unsigned char) c) >> 1;
	printf("upper limit: %d\n", c);
	printf("lower limit: %d\n", -c - 1);
	return 0;

}

int
count_short(void)
{
	signed short s;
	s = ~0;
	s = ((unsigned short) s) >> 1;

	printf("upper limit: %d\n", s);
	printf("lower limit: %d\n", -s - 1);
	return 0;
}



// ~0U >> 1
//
// BIT NUMBER    31                                     0
//                ▼                                     ▼
// number bits    0000 0000 0000 0000 0000 0000 0000 0000 
//                ▲                                     ▲ 
//               MSB                                   LSB
//
//
//
// LSB - Least Significant Bit (numbered 0)
// MSB - Most  Significant Bit (numbered 31) 
//
// BIT NUMBER    31                                     0
//                ▼                                     ▼
// number bits    1111 1111 1111 1111 1111 1111 1111 1111
//                ▲                                     ▲ 
//               MSB  
//
// i >> 1 bit shift hace q el 1 MSB se vuelva 0 y así tenemos el rango máximo








