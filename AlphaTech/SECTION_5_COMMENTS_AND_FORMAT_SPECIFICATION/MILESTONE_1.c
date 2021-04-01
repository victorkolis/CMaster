#include <stdio.h>

int main(int argc, char *argv[]) {
	/* Basic calculations */
	
	int value_1 = 5;
	int value_2 = 2;
	
	printf("%d + %d = %d\n",  value_1, value_2, value_1 + value_2);
	printf("%d - %d = %d\n",  value_1, value_2, value_1 - value_2);
	printf("%d * %d = %d\n",  value_1, value_2, value_1 * value_2);
	printf("%d / %d = %d\n",  value_1, value_2, value_1 / value_2);
	printf("%d %% %d = %d\n", value_1, value_2, value_1 % value_2);
	
	return 0;
	
}
