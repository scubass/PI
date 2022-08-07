#include <stdio.h>
#include <limits.h>

int
main(void) {
   int c = INT_MAX;
   int d;
   d = c + c; // muve un bit para la izquierda como c<<1 y queda todo 1 menos el último 0? 
   int e = c + 1; // se me va del rango de int 2^32 - 1??
   printf("%0xd\n", d);
   printf("c=%d   d=%d   e=%d\n", c, d, e);
   return 0;
}

// overflow en la últimas 2 operaciones
