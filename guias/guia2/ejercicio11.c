#include <stdio.h>

int
main(void)
{
    unsigned char primer_caracter = getchar();
    unsigned char segundo_caracter = getchar();
    printf("el mayor entre %c y %c es %cd\n", primer_caracter, segundo_caracter, (primer_caracter > segundo_caracter) ? primer_caracter : segundo_caracter);

}
// el mayor entre A y B es B
// el mayor entre A y <Cr> es <Cr>
//
// el mayor entre A y <Tab> es <Tab>
