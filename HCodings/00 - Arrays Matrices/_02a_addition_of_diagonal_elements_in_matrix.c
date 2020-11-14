/*
 * Original code @ happy codings
 *
 */

#include <stdio.h>

int main(){

	int a, b, matrix[10][10], row, col;
	int sum = 0;

	printf("\nEnter the number of rows: ");
	scanf("%d", &row);

	printf("\nEnter the number of columns: ");
	scanf("%d", &col);

	/* Accept the elements in m x n matrix*/
	for(a = 0; a < row; a++){
		for(b = 0; b < col; b++){
			printf("\nEnter the element [%d][%d]: ", a, b);
			scanf("%d", &matrix[a][b]);
		}
	}

	/* Addition of all diagonal elements */
	for(a = 0; a < row; a++){
		for(b = 0; b < col; b++){
			if(a == b)
				sum += matrix[a][b];
		}
	}

	/* Print out the result */
	printf("\nThe sum of the diagonal elements in the matrix: %d\n\n", sum);

	return 0;
}

