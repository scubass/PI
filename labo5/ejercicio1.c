#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


void
eliminar_repetidos(char * s)
{
	int i, j;
	if (s[0] == 0) {
		return;
	}

	for(i = j = 1; s[i] != 0; i++) {
		if (s[i] != s[i - 1]) {
			// copio
			s[j++] = s[i]; 
		}
		else {
			// no copio
		}
	}
	s[j] = 0;
}

int
comprimeCar(char * s, char c, int vec[], int dimMax)
{
	int i, j, aux = 0, counter = 0;
	if (s[0] == 0) {
		return 0;
	}

	for(i = j = 1; s[i] != 0; i++) {
		if (s[i] != s[i - 1] || counter == dimMax) {
			// copio

			s[j++] = s[i]; 
		}
		else {
			// no copio
			if (aux != s[i]) {
				aux = s[i];
				counter++;
			}
			

		}
	}
	s[j] = 0;
	printf("counter: %d\n", counter); 
	return counter;
}




    // Sólo para testing
    static void assertArrayEquals(const int * e, const int * a, size_t d);
     
    int
    main(void) {
        int vec[10];
     
        char s1[20] = "Aaa, bb aaaa cc aaa";
        int dim = comprimeCar(s1, 'a', vec, 10);
	printf("%s\n", s1);
        assert(strcmp(s1, "Aa, bb a cc a") == 0);
        assert(dim == 3);
        int expectedS1[] = {1,3,2};
        assertArrayEquals(expectedS1, vec, dim);
     
        char s2[20] = "Aaa bb aaaa cc aaa";
        dim = comprimeCar(s2, 'a', vec, 2);
        assert(strcmp(s2, "Aa bb a cc aaa") == 0);
        assert(dim == 2);
        int expectedS2[] = {1,3};
        assertArrayEquals(expectedS2, vec, dim);
     
        char s3[] = "Aaaaa babaaa aaaaaa";
        dim = comprimeCar(s3, 'a', vec, 5);
        assert(strcmp(s3, "Aa baba a") == 0);
        assert(dim == 4);
        int expectedS3[] = {3,0,2,5};
        assertArrayEquals(expectedS3, vec, dim);
     
        char s4[] = "Aaaaa babaaa aaaaaa";
        dim = comprimeCar(s4, 'a', vec, 2);
        assert(strcmp(s4, "Aa babaaa aaaaaa") == 0);
        assert(dim == 2);
        int expectedS4[] = {3,0};
        assertArrayEquals(expectedS4, vec, dim);
     
        // Sin el caracter a comprimir
        char s5[] = "Aaaaa babaaa aaaaaa";
        dim = comprimeCar(s5, 'z', vec, 2);
        assert(strcmp(s5, "Aaaaa babaaa aaaaaa") == 0);
        assert(dim == 0);
     
        // Con el caracter pero sin tamaño
        char s6[] = "Aaaaa babaaa aaaaaa";
        dim = comprimeCar(s6, 'a', vec, 0);
        assert(strcmp(s6, "Aaaaa babaaa aaaaaa") == 0);
        assert(dim == 0);
     
        char s7[] = "";
        dim = comprimeCar(s7, 'a', vec, 10);
        assert(strcmp(s7, "") == 0);
        assert(dim == 0);
     
        printf("OK!\n");
        return 0;
    }
     
    // Sólo para testing
    static void
    assertArrayEquals(const int * expected, const int * actual, size_t dim) {
        for(int i = 0; i < dim; i++) {
            assert(expected[i] == actual[i]);
        }
    }
     

