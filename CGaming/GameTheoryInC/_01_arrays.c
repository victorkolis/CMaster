//
//  _01_arrays.c
//  GameTheoryInC
//
//  This software objective is to return the highest valeu in an array
//  Created by VictorKolis on 19/11/20.
//

#include <stdio.h>
#include <limits.h>

int max(int array[], int n){
    
    int maxValue = 0;
    
    for(int i = 0; i < n; i++){
                
        if(array[i] > maxValue){
            
            maxValue = array[i];
        }
    }
    
    return maxValue;
}

int main(){
    
    int array[10] = { 1, 25, 36, 475, 58, 66, 73, 80, 93, 100};
    
    printf("The highest number in the array is %d\n\n", max(array, 10));
    
    return 0;
}
