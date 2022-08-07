#include <stdio.h>

#include "../getnum2.c"

int
main(void)
{
    unsigned char primer_caracter = getchar();
    unsigned char segundo_caracter = getchar();

    if (primer_caracter > segundo_caracter) {
        printf("el mayor entre %c y %c es %c\n", primer_caracter, segundo_caracter, segundo_caracter);
    }
    else {
        printf("el mayor entre %c y %c es %c\n", primer_caracter, segundo_caracter, segundo_caracter);
    }

}
// el mayor entre A y B es B
// el mayor entre A y <Cr> es <Cr>
//
// el mayor entre A y <Tab> es <Tab>
