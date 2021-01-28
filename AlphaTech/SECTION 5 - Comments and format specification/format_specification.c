#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* Using only one format specification */
	printf("I am %d years old\n", 20);
	
	/* Using two format specification */
	printf("I am %d years old. Next year I am going to be %s years old.\n", 27, "28");
	
	/* Using the float type format specification */
	printf("My average grade is %.2f\n", 93.7);
	
	return 0;
}
