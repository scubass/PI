#include <stdio.h>
#include <assert.h>

#define COLS 4

int sonAmigas(const int (m1[])[COLS], unsigned int fils1,const int (m2[])[COLS], unsigned int fils2 );

int 
main(void)
{
  int m1[][COLS] = {{0,1,2,3}, {4,4,5,6}, {7,8,8,9}};
  int m2[][COLS] = {{0,1,2,3}, {-3,7,8,9}, {-1,3,4,7}, {4,5,6,8}};
  int m3[][COLS] = {{2,3,3,7}};
  assert(sonAmigas(m1,3,m2,4)==1);
  assert(sonAmigas(m1,1,m2,4)==1);
  assert(sonAmigas(m1,2,m2,4)==1);
  assert(sonAmigas(m1,2,m2,2)==0);
  assert(sonAmigas(m2,4,m1,3)==2);
  assert(sonAmigas(m1,3,m3,1)==0);
  assert(sonAmigas(m3,1,m1,3)==0);
  int res = sonAmigas(m1,3,m1,3);
  assert(res==1 || res==2);
  
  printf("OK !\n");

  return 0;
}

int
sonAmigas(const int (m1[])[COLS], unsigned int fils1,const int (m2[])[COLS], unsigned int fils2 )
{
	int found = 1;
	for (int i = 0; i < fils1 && found != 0; i++) {
		found = search_line(const int m1[][COLS], const int m2[][COLS], unsigned int fila1);
	}
}

int
seasearch_line(const int m1[][COLS], const int m2[][COLS], unsigned int fila2)
{
	int flag = 1
	for (int i = 0; i < fila2; i++) {
		for (j = 0; j < COLS; j++) {
			if (item_belongs(m1[][C]) != 1) {
				flag = 0;
			}
		}
	}	
}


