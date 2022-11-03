#include <stddef.h>
#include <math.h>
#include <assert.h>
#include <stdio.h>
#define EPSILON 0.003

int branches(float len, float minimo);
void regla(int number);

int capicua_wrapper(const char * s);
int capicua(const char * s, int len);


int len(char * s);
int
main(void)
{
	assert(capicua_wrapper("hh") == 1);
	assert(capicua_wrapper("ccaacc") == 1);
	assert(capicua_wrapper("hah") == 1);
	assert(capicua_wrapper("hola") == 0);
	puts("Todo OK!");
	regla(10);
	printf("\n");
	printf("%d\n", branches(10, 2.7));
	return 0;
}

int
len(char * s)
{
	if(s[0] == 0) {
		return 0;
	}
	else {
		return 1 + len(s + 1);
	}
}

int
capicua_wrapper(const char * s)
{
	return capicua(s, len((char *)s));
}

int
capicua(const char * s, int len)
{
	if (len == 0 || len == 1)  {
		return 1;
	}
	else if (s[0] != s[len - 1]) {
		return 0;
	} 
	else {
		return capicua(s + 1, len - 2);
	}

}

void
regla(int number){
	if (number == 0) {
		return;
	}
	int num = number / 2;
	regla(num);
	printf("%d  ", number);
	regla(num);
}


int
branches(float len, float minimo)
{
	if (len < minimo) {
		return 0;
	}
	else {
		return 1 + branches(len / 2, minimo) + branches(len / 2, minimo);
	}
}
