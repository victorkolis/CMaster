//
//  _02_structs.c
//  GameTheoryInC
//
//  Created by VictorKolis on 20/11/20.
//

#include "SDL/SDL.h"
#include <stdio.h>

/* This is sort of a class */
typedef struct {
    
    /* Attributes */
    int x, y;
    short life;
    char *name; /* String */
    
} Man;

void structs(){
    
    /* Sort of object instance */
    Man man, man2;
    man.x = 50;
    man.y = 50;
    man.life = 100;
    man.name = "Victor";
    
    man2.x = 10;
    man2.y = 10;
    man2.life = 200;
    man2.name = "Kolis";
    
    printf("The name of man is %s\n", man.name);
    
}

int main(int argc, char *argv[]){
    
    structs();
    
    return 0;
}
