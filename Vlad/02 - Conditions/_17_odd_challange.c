//
//  _17_odd_challange.c
//  Instructor : Vlad
//
//  Created by VictorKolis on 20/11/20.
//

#include <stdio.h>

int main(){
    
    int userInput;
    
    
    printf("Please enter a number >>> ");
    scanf("%d", &userInput);
    

    if(userInput % 2 == 0){
        printf("\n%d is an even number...\n\n", userInput);
    } else {
        printf("\n%d is an odd number...\n\n", userInput);
    }
    
    
    return 0;
}
