#include <stdio.h>

void nested_func(unsigned char* num) { *num=32 ;}

int func( void ) { unsigned int num; nested_func(&num); return num; }

void main(void) { printf("%d\n", func()); 
}
