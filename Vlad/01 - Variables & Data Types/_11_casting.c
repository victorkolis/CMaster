//
//  _11_casting.c
//  Vlad
//
//  Created by VictorKolis on 12/11/20.
//

#include <stdio.h>

int main(){
    
    /* Implicit conversion */
    int num1 = 5;
    double num2 = 2.0;
    printf("%d / %.f: %f\n", num1, num2, num1 / num2);
    
    /* Explicit conversion or casting */
    int num3 = 5, num4 = 2;
    double div = (double)num3 / num4;
    printf("5 / 2: %lf\n\n", div);
    
    return 0;
}
