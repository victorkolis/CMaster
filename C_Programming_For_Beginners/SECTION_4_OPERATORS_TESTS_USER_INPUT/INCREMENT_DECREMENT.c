#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double increment = 0;
	double decrement = 0;
	
	/* post-increment */
	increment++;
	printf("%0.2f\n", increment);
	
	decrement = increment--;
	printf("%0.2f\n", decrement);
	printf("%0.2f\n", increment);
	
	/* pre-increment */
	decrement = --increment;
	printf("%.2f", decrement);
	
	return 0;
}
