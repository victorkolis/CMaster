/*
 * @author: Victor Kolis
 *
 * This software objective is to add up all of the element that align in the 
 * diagonal part of the matrix. Therefore, the software will only do so when
 * the number of rows are the exact same value. Thusly adding diagonals of a perfect
 * square matrix.
 *
 */

#include <stdio.h>
#include <string.h>

int main(){

	int a, b, matrix[10][10], row, col;
	int sum = 0;

	printf("\nEnter the number of rows: ");
	scanf("%d", &row);

	printf("\nEnter the number of columns: ");
	scanf("%d", &col);

	/* Accept the elements in the matrix*/
	if(row == col){
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

	} else {
		printf("\n%s", "This is not a perfect square!\n\n");

	}

	return 0;
}

