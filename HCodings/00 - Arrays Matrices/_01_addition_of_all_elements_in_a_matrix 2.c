//
//  _01_addition_of_all_elements_in_a_matrix.c
//  Original code @ Happy Codings
//
//  Created by VictorKolis on 12/11/20.
//

#include <stdio.h>

int main(){
    int a, b, mat[10][10], row, col;
    int sum = 0;
    
    printf("\nEnter the number of rows: ");
    scanf("%d", &row);
    
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);
    
    // Accept the elements in the matrix
    for(a = 0; a < row; a++){
        for(b = 0; b < col; b++){
            printf("\nEnter the element mat[%d][%d]: ", a, b);
            scanf("%d", &mat[a][b]);
        }
    }
    
    //Addition of all elements
    for(a = 0; a < row; a++){
        for(b = 0; b < col; b++){
            sum += mat[a][b];
        }
    }
    
    // Print out the result
    printf("\nSum of all elements in the matrix:  %d\n\n", sum);
    return 0;
}
