//
//  main.c
//  Example1-1.c
//
//  Created by VictorKolis on 13/11/20.
//

#include <stdio.h> //printf
#include <math.h> // erf, sqrt

int main(){
    printf("The integral of a Normal(0, 1) distribution between -1.96 and 1.96 is: %g\n", erf(1.96*sqrt(1/2.)));
}
