
#define R 0.2989
#define G 0.5870
#define B 0.1140

#define N 3
#define M 5
#define RGB_M (3 * M)

#include <assert.h>
#include <stdio.h>

void rgbToGray(const unsigned char(rgb[])[RGB_M], unsigned char grayscale[][M]);

// Solo para testing
static void assertMatrixEquals(const unsigned char(expected[])[M],
                               const unsigned char(actual[])[M], size_t fils,
                               size_t cols);

int main(void) {
  unsigned char rgbMatrix[][RGB_M] = {{100, 200, 100, 100, 180, 100, 200, 100,
                                       120, 110, 123, 122, 100, 120, 122},
                                      {101, 200, 105, 99, 200, 100, 201, 102,
                                       118, 110, 120, 120, 100, 121, 122},
                                      {100, 200, 100, 100, 210, 105, 200, 100,
                                       100, 120, 120, 100, 100, 122, 121}};
  unsigned char grayscaleMatrix[N][M];
  rgbToGray(rgbMatrix, grayscaleMatrix);
  unsigned char expectedGrayscaleMatrix[][M] = {{158, 146, 132, 118, 114},
                                                {159, 158, 133, 116, 114},
                                                {158, 165, 129, 117, 115}};
  assertMatrixEquals(expectedGrayscaleMatrix, grayscaleMatrix, N, M);

  puts("OK!\n");
  return 0;
}

/**
 * Tester
 */
static void assertMatrixEquals(const unsigned char(expected[])[M],
                               const unsigned char(actual[])[M], size_t fils,
                               size_t cols) {
  for (int i = 0; i < fils; i++) {
    for (int j = 0; j < cols; j++) {
      assert(expected[i][j] == actual[i][j]);
    }
  }
}



void
rgbToGray(const unsigned char(rgb[])[RGB_M], unsigned char grayscale[][M])
{
	int suma = 0, i = 0, j = 0, pixel1, pixel2, pixel3;
	int grey;
	for ( i = 0; i < N; i++) {
		for (j = 0; j < M; j += 3) {
			pixel1 = rgb[i][j];
			pixel2 = rgb[i][j + 1];
			pixel3 = rgb[i][j + 2];

			grey = pixel1 * 0.2989 +  pixel2 * 0.5870 + pixel3 * 0.1140;
			grayscale[i][j / 3] = grey;

		}
	}
}

