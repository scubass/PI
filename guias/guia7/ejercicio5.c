#include <stdio.h>


void
fill_array(char * alumnos[4], char cursos[], char * curso_g[], char * curso_h[])
{
	int j, k;
	j = k = 0;
	for (int i = 0; i < 4; i++) {
		if (cursos[i] == 'H') {
			curso_h[j++] = alumnos[i];	
		} 
		else {
			curso_g[k++] = alumnos[i];
		}
	}
} 

int
main(void)
{
	char * alumnos[4] = {"Juan", "Raul", "Mario", "Carlos"};

	char cursos[] = {'H', 'H', 'G', 'G'};

	char * curso_g[2];
	char * curso_h[2];

	for (int i = 0; i < 2; i++) {
		printf("cursro g : %s\n curso_h: %s\n", curso_g[i], curso_h[i]);
	}

	fill_array(alumnos, cursos, curso_g, curso_h);
}
