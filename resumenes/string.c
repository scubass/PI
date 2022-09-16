#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char * ownStrCpy(char * t, const char * s, int n);
char * str_cat(char * t, const char * s);

unsigned int longString(const char * s);
unsigned long ptrString(const char * s);
int strcmp(const char* s1, const char * s2);


int
main(void)
{
	const char * string = "hola hola\n"; 
	printf("%u\n", longString(string));
	printf("%lu\n", ptrString(string));
	char v[10] = {'g', 'o', 'a'};
	char * bye = "adios";
	
	printf("%d\n", strcmp("hola", "holaa"));
	
	printf("%d\n", strcmp("abc", "Abc"));
	printf("%s\n", str_cat(v, bye));

	return 0;
}


unsigned int longString(const char * s) {
	unsigned long dim = 0;
	while(*s != '\0') {
		dim++;
		s++;
	}
	return dim;
}

unsigned long ptrString(const char * s) {
	unsigned long aux = (unsigned long) s;
	while(*s != '\0') {
		s++;
	}
	return (unsigned long) s - aux;
}



char * ownStrCpy(char * t, const char * s, int n) {
	char * aux = t;
	for (int i = 0; i < n; i++) {
		if (*s) {
			*t++ = *s++;
		}
		else {
			*t++ = 0;
		}
	}

	return aux;
}


char * str_cat(char * t, const char * s ) {
	int len = longString(t);

	for (int i = len, index = 0; s[index] != '\0'; i++, index++) {
		t[i] = s[index];
	}
	return t;
}


int strcmp(const char* s1, const char * s2) {
	int count = 0;
	for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
		count += s1[i] - s2[i];
	}

	return count;
}
