#include <stdio.h>
#include <assert.h>
#include <string.h>

void invierte_rec(char * s, char * t, unsigned int dim);
void invierte(char * s, char * t);
int main(void) {

  char s[20] = {0};

  invierte("1234567890", s);
  assert(strcmp(s, "0987654321")==0);

  memset(s, 0, 20);
  invierte("", s);
  assert(strcmp(s, "")==0);

  memset(s, 0, 20);
  invierte("a", s);
  assert(strcmp(s, "a")==0);

  memset(s, 0, 20);
  invierte("ab", s);
  assert(strcmp(s, "ba")==0);
  
  memset(s, 0, 20);
  invierte("abc", s);
  assert(strcmp(s, "cba")==0);

  printf ("OK!\n");
  return 0;
}

void invierte(char * s, char * t) {
	invierte_rec(s, t, strlen(s));
}

void invierte_rec(char * s, char * t,  unsigned int dim) {
	if (dim == 0) {
		*t = 0;
		return;
	}
	*t = s[dim - 1];
	invierte_rec(s, t + 1, dim - 1);
}
