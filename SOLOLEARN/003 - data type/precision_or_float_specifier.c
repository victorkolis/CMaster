#include <stdio.h>

#define PI 3.14159

int main(int argc, char *argv[]) {
	
	/* Adds zeroes to the end if needed */
	printf("%f\n", PI);
	
	/* Controls the amount of floats */
	printf("%.10f\n", PI);
	
	/* Numbers before the float add spaces before the given value when outputting */
	printf("%20.5f\n", PI);
	
	printf("%-8.5f\n", PI);
	
	
	return (0);
	
}
