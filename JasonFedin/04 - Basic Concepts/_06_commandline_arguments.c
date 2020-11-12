/*
 *  main.c
 *  _06_CommandLineArguments
 *
 *  Created by VictorKolis on 10/11/20.
 */

#include <stdio.h>

int main(int argc, char * argv[]) {
    
    argv[1] = "Victor"; 
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    
    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);
    
    return 0;
}
