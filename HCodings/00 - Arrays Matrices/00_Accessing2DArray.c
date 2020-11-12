/*
 * Original code: happycodings.com
 *
 *
 */

#include <stdio.h>

int main() {
	int a, b, c[3][3];

	for(a = 0; a < 3; a++) {
		for(b = 0; b < 3; b++) {
			printf("\nEnter the c[%d][%d]: ", a, b);
			scanf("%d", &c[a][b]);
		}
	}

	for(a = 0; a < 3; a++) {
		for(b = 0; b < 3; b++) {
			printf("%d\t", c[a][b]);
		}
		printf("\n");
	}

	return (0);
}

