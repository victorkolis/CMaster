//
//  _07_ChallengeAreaOfRectangle.c
//  04 _ Basic concepts
//
//  Created by VictorKolis on 10/11/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double width = 10;
    double height = 22;
    double perimeter = (width * 2) + (height * 2);
    double area = width * height;
    
    
    printf("The width of this rectangle is: %.2fcm\n", width);
    printf("The height of this rectangle is: %.2fcm\n", height);
    printf("The perimeter of this rectangle is: %.2fcm\n", perimeter);
    printf("The area of this rectangle is: %.2fcm\n", area);
    
    return 0;
}
