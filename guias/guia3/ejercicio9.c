#include <stdio.h>
#define IN 1
#define OUT 0

int word_count();
int print_word();

int
main(void)
{
	// int counter = 0;
	// signed char c;
 //
	// while ((c = getchar()) != EOF) {
	// 	if (c == ' ' || c == '	' || c == '\n') {
	// 		counter++;
	// 	}
	// }
 //
	// printf("counter = %d\n", counter);
	// word_count();
	print_word();
	return 0;
}


int
word_count(void)
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			nl++;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("new_line: %d new_word: %d new_char: %d\n", nl, nw, nc);
	return 0;
}


int
print_word(void)
{
	signed char c;
	int counter;
	int i;

	while ((c = getchar()) != EOF) {
		counter += 1;	
	}

	for (i = counter; i > 0; i--) {
		putchar();
	}

	return 0;

}
