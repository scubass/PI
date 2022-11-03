#include <stdlib.h>
#include <stdio.h>

int
main(void) {

        char * p = malloc(10);

	// el error se debe a que malloc(10) reserva 10 posiciones y aca es p[10] = 10 * 10 se va de rango
	// y a su vez tengo que usar free cuando ya no voy a usar la variable
        for(int i=0; i < 10; i++)
                p[i] = i * 10;


        for(int i=0; i < 10; i++)
                printf("%d\n", p[i]);

	free(p);
        return 0;

}
