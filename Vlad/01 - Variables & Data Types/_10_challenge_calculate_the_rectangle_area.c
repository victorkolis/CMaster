//
//  _10_challenge_calculate_the_rectangle_area.c
//  Instructor: Vlad
//
//  Created by VictorKolis on 12/11/20.
//

#include <stdio.h>

int main(){
    
    double rectangleWidht = 0;
    double rectangleHeight = 0;
    
    printf("Enter the rectangle width: ");
    scanf("%lf", &rectangleWidht);
    printf("\nEnter the rectangle height: ");
    scanf("%lf", &rectangleHeight);
    printf("\nThe rectangle area is %.2lfcm\n\n", rectangleWidht * rectangleHeight);
    
    return 0;
}
