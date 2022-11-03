
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


// strchr

int isvowel(char letra) {
	return letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u';
}


void
elim_vocales(char * str)
{
	int i, j;
	i = j = 1;
		
	while(str[i] != 0) {
			
		if ( isvowel(str[i] && ( (isalpha(str[i + 1]) && !isvowel(str[i + 1) ) || ( islpha(str[ i - 1]) && !isvowel(str[i - 1]  ) )))) {
			i++;
		}
		else {
			str[j++] = str[i++];
		}

	}
	str[j] = 0;

}

int
main(void)
{
	char  v[] = "hola mundo";
	elim_vocales(v);
	printf("%s\n", v);
	return 0;
}
