#include <stdio.h>

void
elim_repes(char * str1, char * str2) {
	int idx1 = 0, aux_idx1 = 0;
	int idx2 = 0, aux_idx2 = 0;

	while(str1[idx1] != 0 && str2[idx2] != 0) {
		if (str1[idx1] == str2[idx2]) {
			idx1++;
			idx2++;
		}

		else {
			str1[aux_idx1++] = str1[idx1++];
			str2[aux_idx2++] = str2[idx2++];
		}
	}
	// si salgo por q alguno de los dos tiene menos elementos que el otro, termino de copiar lo q me falta
	
	while(str1[idx1]) {
		str1[aux_idx1++] = str1[idx1++];
	}

	while(str2[idx2]) {
		str2[aux_idx2++] = str2[idx2++];
	}

	str1[aux_idx1] = 0;
	str2[aux_idx2] = 0;

}


int
main(void)
{
	char v[10] = "fraccion";
	char v2[10] = "tractor";
	char v3[10] = "mama";
	char v4[10] = "papa";
	elim_repes(v, v2);
	elim_repes(v3, v4);
	printf("%s\n%s\n", v, v2);
	printf("%s\n%s\n", v3, v4);
	return 0;
}
