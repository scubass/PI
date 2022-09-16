#include <stdio.h>
#include <string.h>
#include <assert.h>
int strend(const char * s1, const char * s2);

int main(void) {
	assert(strend("","")==1);
	assert(strend("something","")==1);
	assert(strend("something","thing")==1);
	assert(strend("something","something")==1);
	assert(strend("something","plus something")==0);
	assert(strend("not at the eeeeeend"," end")==0);
	assert(strend("not at the eeeeeennnnnd","end")==0);
	assert(strend("","s")==0);
	assert(strend("ssss","sss")==1);
	assert(strend("ssss","sssss")==0);
	puts("OK!");
	return 0;
}

int 
strend(const char * s1, const char * s2) {
	int len2 = strlen(s2);
	int len1 = strlen(s1);

	if (len1 < len2) {
		// no puedo ver si s1 temina con s2 por q s1 ni entra en s2
		return 0;
	}

	int condicion = 1;
	for (int i = len1 - 1; i >= len1 - len2 && condicion != 0; i--) {
		if (s1[i] != s2[i]) {
			condicion = 0;
		}
	}
	return condicion;
}
