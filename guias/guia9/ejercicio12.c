#include <stdio.h>
#include <assert.h>

int balance(const char *texto);


int main(void) {

  assert(balance("")==0);
  assert(balance("((()))")==0);
  assert(balance(")(")==0);
  assert(balance("()()")==0);
  assert(balance(")))(((")==0);
  assert(balance("))) ((( ))( ()() ()()(")==0);
  
  assert(balance(")")!=0);
  assert(balance("(")!=0);
  assert(balance(")()")!=0);
  assert(balance(" ) ")!=0);
  assert(balance("))))))))))))))))))))))))))))))))))))))))))))))))))))))")!=0);
  assert(balance("))))))))))))))))))))))))))))))))))))))))))))))))))))))((((((((((((")!=0);

  printf ("OK!\n");
  return 0;
}

int
balance(const char * texto)
{
	int aux = 0;
	if (*texto == 0) {
		return aux;
	}
	if (*texto == '(') {
		aux = 1;
	}
	if (*texto == ')') {
		aux = -1;
	}
	return aux + balance(texto + 1);
}
