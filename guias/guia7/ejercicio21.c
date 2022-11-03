#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BLOQUE 10

typedef char * TAlumnos[]; 

char **
aprobados(TAlumnos entrada, int notas[]) {
	char ** ans = NULL;
	int i = 0, aux = 0;

	for( ; *entrada[i] != 0; i++) {
		if (notas[i] >= 4) {
			if (aux % BLOQUE == 0) {
				ans = realloc(ans, (aux + BLOQUE) * sizeof(char *));
			}

			ans[aux] = malloc((strlen(entrada[i]) + 1) * sizeof(char));

			strcpy(ans[aux], entrada[i]);
			aux++;
		}
	}
	printf("Salio del loop\n");
	ans = realloc(ans, (aux + 1) * sizeof(char *));
	ans[aux] = malloc(sizeof(char));
	strcpy(ans[aux], "\0");
	return ans;
}

void
liberaAprobados(char ** entrada)
{	int i = 0 ;
	for (  ; *entrada[i] != 0; i++) {
		free(entrada[i]);
	}

	free(entrada[i]);
	free(entrada);
}


int main(void){

    TAlumnos alumnos = {"Juan", "Pedro", "Martin", ""};
    int notas[] = {1, 4, 10, 2, 10, 11};
    
    char ** apr = aprobados(alumnos, notas);
    if(apr == NULL){
        printf("No hay suficiente memoria!\n");
        return 1;
    }
    assert(!strcmp(alumnos[1], apr[0]) && !strcmp(alumnos[2], apr[1]) && !strcmp(alumnos[3], apr[2]));
    liberaAprobados(apr);
    
    puts("OK");
    puts("OK!");
    // En este programa no liberamos la memoria que utilizamos. Que ocurre si compilamos con "-fsanitize=address"?
    return 0;
}
