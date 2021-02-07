#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int fahr, celcius;
	int lower, upper, step;
	
	lower = 0; /* Lower limit of temperature */
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%3d %4d\n", fahr, celcius);
		fahr = fahr + step;
	}
}
