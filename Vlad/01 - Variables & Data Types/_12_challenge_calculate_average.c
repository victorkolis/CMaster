//
//  _12_challenge_calculate_average.c
//  Instructor : Vlad
//
//  Created by VictorKolis on 12/11/20.
//  The software objective is to calculate a given number of grades

#include <stdio.h>

int main(){
    
    int numberOfGrades;
    double allGrades = 0;
    
    printf("How many grades are there? ");
    scanf("%d", &numberOfGrades);
    double grades[numberOfGrades];
    
    for(int i = 0; i < numberOfGrades; i++){
        printf("\nFill in grade number[%d]: ", i + 1);
        scanf("%lf", &grades[i]);
        allGrades += grades[i];
        
    }
    
    printf("Your grade average is %.2lf \n\n", allGrades / numberOfGrades);
    
    return 0;
}
