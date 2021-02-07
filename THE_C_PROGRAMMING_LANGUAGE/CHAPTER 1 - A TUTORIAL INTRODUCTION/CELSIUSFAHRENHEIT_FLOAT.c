#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float fahr, celcius;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	/* Operation */
	while (fahr <= upper){
		celcius = 0.555 * (fahr - 32);  /* 0.555 -> 5.0/9.0 */
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr += 20;
	}
	
}
