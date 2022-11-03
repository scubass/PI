#include <stdio.h>
#include <assert.h>

int apareados(const char *texto);

int main(void) {

  assert(apareados("")==0);
  assert(apareados("()")==0);
  assert(apareados("(())()(()())")==0);
  assert(apareados("((((()))))")==0);

  assert(apareados("(")!=0);
  assert(apareados(")")!=0);
  assert(apareados("(")!=0);
  assert(apareados("())")!=0);
  assert(apareados("()(")!=0);
  assert(apareados("((()))())(")!=0);
  
  printf ("OK!\n");
  return 0;
}

int
apareados(const char *texto)
{
	//cb es el final del string
	if (*texto == 0) {
		return 0;
	}
	int aux = apareados(texto + 1);
	
	if (aux < 0) {
		return aux;
	}

	return aux + (*texto == '(' ? -1 : 1);
}
