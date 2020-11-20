//
//  _09_bitwise_operators.c
//  Instructor : JasonFedin
//
//  Created by VictorKolis on 19/11/20.
//

#include <stdio.h>

int main(){
    
    // Unsigned is by default implicitly there
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
       
    printf("%d & %d: %d\n", a, b, a & b);
    printf("%d | %d: %d\n", a, b, a | b);
    printf("%d ^ %d: %d\n\n", a, b, a ^ b);
    
    // Shifting the bits
    printf("%d << 2: %d\n", a, a << 2);
    printf("%d << 4: %d\n", a, a << 4);
    printf("%d >> 4: %d\n\n", a, a >> 4);
    
    return 0;
}
