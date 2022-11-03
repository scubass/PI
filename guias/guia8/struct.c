#include <stdio.h>
#include <stdlib.h>

struct point {
	int x, y;
};

typedef struct point t_point;


int
main(void)
{
	struct point p1 = {1, 1};
	t_point p2 = {.x = 5, .y = 5};
	t_point p3;
	p3.x = 0;
	p3.y = 0;

	printf("x: %d, y: %d\n", p1.x, p1.y);
	printf("x: %d, y: %d\n", p2.x, p2.y);
	printf("x: %d, y: %d\n", p3.x, p3.y);
	printf("%p, %p, %p\n", (void *) &p1, (void *) &p1.x, (void *) &p1.y);
	// ahora modifico por punteros
	t_point * p_struct = &p1;
	p_struct->x = 10;
	p_struct->y = 20;
	printf("Luego de modificarlos: x: %d, y: %d\n", p1.x, p1.y);
	t_point * ptr_point;
	ptr_point = malloc(sizeof(t_point));
	(* ptr_point).x = 3;
	(*ptr_point).y = 12;
	printf("x: %d, Y: %d\n", ptr_point->x, ptr_point->y);

	
	return 0;
}
