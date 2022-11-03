#include <stdio.h>
#include <assert.h>
int suma(int number);

int main(void) {

  assert(suma(0)==0);
  assert(suma(1)==1);
  assert(suma(12)==3);
  assert(suma(100000)==1);
  assert(suma(123456)==21);
  assert(suma(-123456)==21);
  assert(suma(999999)==54);

  printf ("OK!\n");
  return 0;
}

int
suma(int number)
{
	if (number < 0) {
		number = -1 * number;
	}
	if (number == 0) {
		return 0;
	}
	else {
		return (number % 10) + suma(number / 10);
	}
}
