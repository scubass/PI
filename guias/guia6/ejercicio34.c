#include <stdio.h>
#include <assert.h>
#define FILS 4
#define COLS 4

int nextStep(char cells[FILS][COLS]);


int main(void) {
    char cells[FILS][COLS] =
        { {0,1,0,0},
          {1,1,1,1},
          {0,1,1,0},
          {1,0,0,1} };
        
    assert(nextStep(cells)==1);
    
    char expected[FILS][COLS] =
        { {1,1,0,0},
          {1,0,0,1},
          {0,0,0,0},
          {0,1,1,0} };
    for (int i=0; i < 4; i++)
        for(int j=0; j < 4; j++)
            assert(cells[i][j] == expected[i][j]);
    
    char cells2[FILS][COLS] =
        {{0,1,1,0},
         {0,1,1,0},
         {0,0,0,0},
         {0,0,0,0} };
    assert(nextStep(cells2)==0);
    
    char expected2[FILS][COLS] =
        { {0,1,1,0},
          {0,1,1,0},
          {0,0,0,0},
          {0,0,0,0} };
    
    for (int i=0; i < 4; i++)
        for(int j=0; j < 4; j++)
            assert(cells2[i][j] == expected2[i][j]);
    
    puts("OK!");

    return 0;
}



int
nextStep(char cells[FILS][COLS])
{

	int counter;

	for (int i = 1; i < FILS - 1; i++) {
		for(int j = 1; j < COLS - 1 ; j++) {
			counter = 0;

			for (int k = -1; k <= 1; k++) {
				for (int m = -1; m <= 1; m++) {
					counter += cells[i + k][j + m];
				}
			}
			// si la celula está viva
			if (cells[i - 1] == 1) {
				// saco el 1 de la celula por q no lo tengo q contar
				counter = counter - 1;
				if (counter != 2 && counter != 3) {
					cells
				}

			}
		}
	}

}


