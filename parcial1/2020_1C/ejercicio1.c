#include <stdio.h>
#include <string.h>
#define ES_VOCAL(x) ((x) == 'A' || (x) == 'E' || (x) == 'I' || (x) == 'O' || (x) == 'U' || (x) == 'a' || (x) == 'e' || (x) == 'i' || (x) == 'o' || (x) == 'u')
#define hola(x) strcmp("aeiouAEIOU", (x))
// si lo q le paso es una vocal devuelve 1 sino 0 int main(void)
{

	char x = 'A';
	int n1 = ES_VOCAL('a');
	int n2 = ES_VOCAL(x);
	int n3 = hola("A");
	printf("%d, %d, con strcmp: %d\n", n1, n2, n3);
	return 0;
}
