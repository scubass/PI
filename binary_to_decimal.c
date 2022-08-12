#include <stdio.h>
#include <string.h>
#include <math.h>

int
main(void)
{
	// char a[50];
	// scanf("%s\n", a);
	// printf("%lu\n", strlen(a) );
	// int i;
	// for (i = 0; i < strlen(a); i++) {
	// 	printf("%c\n", a[i]);
	// }
	char num[50];
	scanf("%s", num);
	int i;
	int numero_final = 0;
	int place_holder = 0
	printf("%d\n", strlen(num));
	for (i = 0; i < strlen(num); i++) {
		numero_final += num[i] * place_holder;
		place_holder *= 2;
	}
	printf("%d\n", numero_final);
	return 0;
}
