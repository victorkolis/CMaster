//
//  _20_control_flow_moving_forward.c
//  Instructor : Vlad
//
//  Created by VictorKolis on 21/11/20.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int grade;
    
    printf("Please enter your grade: ");
    scanf("%d",&grade);
    
    if(grade >= 80){
        printf("Congrats, you've done greate!\n\n");
    } else if(grade >= 60) {
        printf("Not bad! Let's raise this grade next time!\n\n");
    } else if(grade < 0) {
        printf("Invalid grading!\n\n");
    } else {
        printf("You've flunked!\n\n");
    }
    
    return 0;
}
