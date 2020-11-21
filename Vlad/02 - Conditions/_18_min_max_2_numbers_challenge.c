//
//  _18_min_max_2_numbers.c
//  Instructor : Vlad
//
//  Created by VictorKolis on 20/11/21.
//

#include <stdio.h>

int main(){
    
    int num1, num2;
    
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("\nEnter the 2nd number: ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        printf("\n%d is the greater number\n\n", num1);
    } else {
        printf("\n%d is the greater number\n\n", num2);
    }
    
    return 0;
}
