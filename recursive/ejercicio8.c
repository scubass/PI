#include <stdio.h>
#include <assert.h>

int ackermann(int M, int N) {
	if (M == 0) {
		return N + 1;
	}
	if (N == 0) {
		return ackermann(M - 1, 1);
	}
	else {
		return ackermann(M - 1, ackermann(M, N - 1));
	}
} 

int main(void) {

  for(int i=0; i < 100; i++)
     assert(ackermann(0, i)==i+1);

  assert(ackermann(3,0)==5);
  assert(ackermann(3,2)==29);

  printf("Wait for it...\n");

  assert(ackermann(4,1)==65533);

  printf ("Legendary!\n");
  return 0;
}
