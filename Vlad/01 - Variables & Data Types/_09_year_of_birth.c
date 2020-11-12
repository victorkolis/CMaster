//
//  _09_year_of_birth.c
//  Instructor: Vlad
//
//  The software's objective is: To get the year of birth from the user.
//  Created by VictorKolis on 12/11/20.
//


#include <stdio.h>
#include <time.h>

int main(){
    
    time_t s;
    struct tm* current_time;
    
    s = time(NULL);
    
    current_time = localtime(&s);
    
    int userAge;
    int userMonthOfBirth;
    
    printf("Please enter your age: ");
    scanf("%d", &userAge);
    printf("Please enter the month you were born: ");
    scanf("%d", &userMonthOfBirth);
    
    /* Usually tm_mon returns the current month - 1, thus + 1 */
    if(userMonthOfBirth > current_time->tm_mon + 1){
        printf("You were born in %d\n", current_time->tm_year + 1900 - userAge - 1);
    } else {
        
        printf("You were born in %d\n", current_time->tm_year + 1900 - userAge);
    }
    
    return 0;
}
