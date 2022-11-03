#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "bolsaADT.h" 

typedef struct bagCDT {
	elemType dato;
	struct bagCDT * tail;
} TbagCDT;

// Utilizamos char * como elemType y strcmp como compare
// Recuerden recompilar tp10_ej10.c si cambian el elemType

int main(void) {
	bagADT bag = newBag();
	assert( add(bag, "agustina") == 1 );
	assert( add(bag, "agustina") == 2 );
	assert( add(bag, "belen") == 1 );
	assert( add(bag, "carla") == 1 );
	assert( add(bag, "carla") == 2 );
	assert( add(bag, "carla") == 3 );
	assert( add(bag, "daniel") == 1 );
	assert( add(bag, "emilio") == 1 );

	assert( count(bag, "carla") == 3 );
	assert( count(bag, "agustina") == 2 );
	assert( count(bag, "amelia") == 0 );
	assert( size(bag) == 5 );
	assert( compare(mostPopular(bag), "carla") == 0 );

    for(int i=2; i <= 10001; i++)
        assert( add(bag, "belen") == i );
    assert(count(bag, "carla") == 3);
    assert(count(bag, "belen") ==10001);
    assert( compare(mostPopular(bag), "belen") == 0 );

    freeBag( bag );
    puts("OK!");

    bag = newBag();
    puts("Al buscar el más popular de un bag vacío debe abortar");
    mostPopular(bag);
    puts("Si ud. ve esto, entonces no abortó como debería haber hecho");
    return 0;
}



bagADT newBag() {
	bagADT ans = calloc(1, sizeof(*ans));
	return ans;
}


// en la lista como no importa el orden siempre voy a añadir luego del primer elemento para
// no tener que llegar a el final pero tampoco perder el primer elemento
unsigned int add(bagADT bag, elemType elem) {
	bagADT ans = malloc(sizeof(*ans));
	ans->dato = elem;
	// caso bolsa vacía
	if (bag == NULL) {
		bag = ans;
		ans->tail = NULL;
	}
	else {
		bagADT aux = bag->tail;
		bag->tail = ans;
		ans->tail = aux;
	}	
	return count(bag, elem);
}


unsigned int count(const bagADT bag, elemType elem) {
	bagADT aux = bag;
	unsigned int counter = 0;
	while (aux != NULL) {
		if (compare(bag->dato, elem)) {
			counter++;
		}
		aux = aux->tail;
	}
	return counter;
}


unsigned int size(const bagADT bag) {
	int counter = 0;
	bagADT aux = bag;
	while (aux != NULL) {
		counter++;
		aux = aux->tail;
	}
	return counter;
}


elemType mostPopular(bagADT bag) {
	if (bag == NULL) {
		fprintf(stderr, "No se le puede pasar un bag vacío a esta función\n");
		exit(1);
	}
	bagADT aux = bag;
	struct vec {
		elemType dato;
		int counter;
	};
	struct vec * vec_aux = NULL;
		

}







