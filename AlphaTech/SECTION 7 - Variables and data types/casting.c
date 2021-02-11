#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Mathematical operations of the same type will result in a product of the same type */
	int num1 = 5, num2 = 2.0;
	double result;
	
	result = num1/(double)num2;
	printf("result = %.2lf \n", result);
	
}
