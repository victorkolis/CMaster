#include <stdio.h>

int main(int argc, char *argv[]) {
	
	printf("%% %d %f %s %c\n\n", 257, 2.718281, "Numbers are fascinating", 'A');
	
	
	/* Escape characters */
	
	/* Newline plus tab */
	printf("Welcome to the show\v Math is your host.\n\n");
	
	/* New lines */
	printf("This\nBreaks\nInto\nNew\nLines\n\n");
	
	/* More characters */
	printf("\\Backlash \tTab \"Double and \'Single quotes  \bBackspace\n");
	
	return (0);
}
