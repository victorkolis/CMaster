//
//  _19_min_max_3_numbers.c
//  Instructor : Vlad
//
//  Created by VictorKolis on 20/11/21.
//

#include <stdio.h>

int main(){
    
    long int num[3];
    long int verifier = 0;
    
    
    printf("Enter the first number: ");
    scanf("%ld", &num[0]);
    printf("\nEnter the second number: ");
    scanf("%ld", &num[1]);
    printf("\nEnter the third number: ");
    scanf("%ld", &num[2]);
    
    for(int i = 0; i < 3; i++){
        if(num[i] > verifier){
            verifier = num[i];
        }
    }
    
    printf("\nThe greatest number is %ld\n\n", verifier);
    
    return 0;
}
