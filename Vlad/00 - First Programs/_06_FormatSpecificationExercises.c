//
//  _06_FormatSpecificationExercises.c
//  Vlad
//
//  Created by VictorKolis on 12/11/20.
//

#include <stdio.h>

int main(){
    
    printf("We have %d coins in the bank.\n", 100);
    printf("We have %f coins in the bank.\n", 125.7);
    printf("Year = %d\n", 2021);
    printf("Your average grade is: %f\n", 95.13);
    printf("num1 = %d, num2 = %f, sum = %d\n", 5, 7.0, 5 + 7);
    printf("num1 = %f, num2 = %f, sum = %f\n", 5.2, 7.3, 9.5);
    printf("num1 = %d, num2 = %d, sub = %d\n", 5, 3, 5 - 3);
    printf("a = %d, b = %d, sum = a + b = %d\n", 3 , 5, 3 + 5);
    printf("a = %d, b = %d, sum = %d * %d = %d\n", 3, 5, 3, 5, 3 * 5);
    printf("a = %d, b = %d, sum = a / b = %d / %d = %f\n", 3, 5, 3, 5 , 3 / 5.0);
    
    return 0;
    
}
