#include <stdio.h>

#define LONG_PI 3.14159

int main(int argc, char *argv[]) {
	
	/* Constants must be initialized with a value when declared. */
	const double PI = 3.14;
	printf("%.2f\n", PI);
	printf("%.5f\n", LONG_PI);
	
	return (0);
}
