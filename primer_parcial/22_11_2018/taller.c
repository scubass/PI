#include <assert.h>
#include <stdio.h>
#include <string.h>


void eliminaRepetidas(char[]);
 
int
main(void) {
    char nom[] = "flogger";
    eliminaRepetidas(nom);
    assert(strcmp(nom, "floger") == 0);
 
    char ex1[] = "los floggers, los rapperos y los eeeeeeemo se ammman";
    eliminaRepetidas(ex1);
    assert(strcmp(ex1, "los flogers, los raperos y los emo se aman") == 0);
    char ex2[] = "la llama que llama";
    eliminaRepetidas(ex2);
    assert(strcmp(ex2, "la lama que lama") == 0);
    char ex3[] = "aaaaaaa aaaa";
    eliminaRepetidas(ex3);
    assert(strcmp(ex3, "a a") == 0);
 
    char empty[] = "";
    eliminaRepetidas(empty);
    assert(strcmp(empty, "") == 0);
 
    char allSameLetter[] = "aaaaa";
    eliminaRepetidas(allSameLetter);
    assert(strcmp(allSameLetter, "a") == 0);
 
    char * expected = "abcdef";
    char lastLetterRepeated[] = "abcdefff";
    eliminaRepetidas(lastLetterRepeated);
    assert(strcmp(lastLetterRepeated, expected) == 0);
    char firstLetterRepeated[] = "aaabcdef";
    eliminaRepetidas(firstLetterRepeated);
    assert(strcmp(firstLetterRepeated, expected) == 0);
    char noRepeteadLetters[] = "abcdef";
    eliminaRepetidas(noRepeteadLetters);
    assert(strcmp(noRepeteadLetters, expected) == 0);
 
    printf("OK!\n");
    return 0;
}


void
eliminaRepetidas(char v[])
{
	int i, j;

	// verifico que el string no sea vacio
	if (v[0] == 0) {
		return;
	}

	i = 1, j = 1;

	while(v[i] != 0) {
		// si el caracter en el cual estoy parado es igual al anterior, sigo y no copio
		if (v[i] == v[i - 1]) {
			i++;
		}
		// si no son iguales --> copio
		else {
			v[j++] = v[i++];
		}
	} 
	v[j] = 0;
	printf("%s\n", v);
}

