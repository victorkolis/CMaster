//
//  _15_congratulation_failed.c
//  Instructor: Vlad
//
//  Created by VictorKolis on 16/11/20.
//

#include <stdio.h>

int main(){
    
    double grade;
    
    printf("Enter your grade: ");
    scanf("%lf", &grade);
    
    if(grade <= 60 && grade >= 0){
        printf("\nSorry, but you have failed!\n\n");
    
    } else if(grade < 0){
        printf("\nInvalid grading!\n\n");
    
    } else {
        printf("\nCongratulations!\n\n");
    }
    
    return 0;
}
