//
//  _14_value_swap.c
//  Instructor : Vlad
//
//  Created by VictorKolis on 13/11/20.
//

#include <stdio.h>
#include <string.h>

int main(){
    
    int a = 10, b = 20, c = 0;
    
    printf("The values prior to the swap b:%d, a:%d\n", b, a);
    
    c = a;
    a = b;
    b = c;
    
    printf("The values after the swap b:%d, a:%d\n\n", b, a);
    scanf("%d%d", &a, &b);
    printf("\n%d%d", a, b);
    return 0;
}
