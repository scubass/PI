#include <stdio.h>
#include <stdlib.h>
int string_to_number(const char *src);
int prt_lista(int arr[], int length);


int
main()
{
	printf("%d\n", string_to_number("1234"));
	int arr[6] = {1, 2, 3, 4, 5, 6};
	prt_lista(arr, 6);
	return 0;
}


int string_to_number(const char *src) {
  int number = 0;
  int sign = 1;
  int position = 1;
  int length = 0;
  for (int j = 0; src[j] != '\0' ; j++) {
    length += 1;  
  }
  
  
  for (int i = length - 1; i >= 0; i--) {
    if (src[i] == '-') {
      sign = -1;
      continue;}
    number += (src[i] - '0') * position;
    position *= 10;
  }
  
  return number * sign;
}


int
prt_lista(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
