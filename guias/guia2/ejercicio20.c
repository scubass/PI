#include <stdio.h>
int parte_c(void);
int EOF_value(void);

int
main(void)
{
	printf("Hello, world!\n");
	// parte_c();
	EOF_value();
	return 0;
}


// int 
// parte_b(void)
// {
	// printf("%c\n"); // donde c es un tipo q no existe para printf, no compila
// }

//
// int
// parte_c(void)
// {
// 	char caracter;
// 	printf("%d\n", (caracter = getchar()) != EOF);
// 	return 0;
// }

int
EOF_value(void)
{
	printf("%d\n", EOF);
	return 0;
}
