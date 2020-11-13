//
//  _13_challange_celcius_to_fahrenheit.c
//  Vlad
//
//  Created by VictorKolis on 13/11/20.
//

#include <stdio.h>

int main(){
    
    double tempInCelcius;
    double tempConverted;
    
    printf("Enter the temp in celcius >> ");
    scanf("%lf", &tempInCelcius);
    
    tempConverted = tempInCelcius * 1.8 + 32;
    
    printf("\n%.2lfºc -> %.2lfºf\n\n", tempInCelcius, tempConverted);
    
    return 0;
}
