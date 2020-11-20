/*
 *  _16_print_the_greater_number.c
 *  Instructor : Vlad
 *
 *  Created by VictorKolis on 19/11/20.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1, num2;
    printf("Enter two numbers:\n");
    printf("\nNumber 1: ");
    scanf("%d", &num1);
    printf("\nNumber 2: ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        printf("\n%d is the greater number\n\n", num1);
    } else {
        printf("\n%d is the greater number\n\n", num2);
    }
    
    return 0;
}
