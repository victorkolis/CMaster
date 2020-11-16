//
//  main.c
//  HuwC
//
//  Created by VictorKolis on 16/11/20.
//

#include <stdio.h>

int main(int argc, char **argv) {
    
    double pettyCash = 0.0, grandTotal;
    
    grandTotal = 500.50;
    pettyCash = 10.5;
    printf("pettyCash: %.2lf\n", pettyCash);
    pettyCash = 100.25;
    printf("pettyCash: %.2lf\n", pettyCash);
    printf("grandTotal: %.2lf\n", grandTotal);
    
    return 0;
}
