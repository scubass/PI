#include <stdio.h>
#define VOLUMEN(radio) (4.0 / 3) * 3.1415 * (radio * radio * radio)
int
main(void)
{
    int i;
    printf("Volúmen de una esfera\n");
    printf("radio\t volúmen\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\t%.3f\n", i, VOLUMEN(i));
    }
}
