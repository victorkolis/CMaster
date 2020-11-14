//
//  main.c
//  _00_seconds_passed
//
//  Created by VictorKolis on 13/11/20.
//  Objective: To show the day of the year and the seconds passed so far

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    time_t current_time;
    char* c_time_string;
    
    /* Obtain the current time */
    current_time = time(NULL);
    
    /* Convert to local time format */
    c_time_string = ctime(&current_time);
    
    for(int i = 0; i < 61; i++){
        printf("%s",c_time_string);
    }
    
    
    return 0;
    
}
