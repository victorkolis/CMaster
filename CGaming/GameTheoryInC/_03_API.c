//
//  _03_API.c
//  GameTheoryInC
//
//  Created by VictorKolis on 20/11/20.
//

#include <stdio.h>
#include "SDL2/SDL.h"

typedef struct{
    int x, y;
    short life;
    char *name;
} Man;

int main(int argc, char *argv[]){
    
    SDL_Window *window; /* Declare a window */
    SDL_Renderer *renderer; /* Declare a renderer */
    
    SDL_Init(SDL_INIT_VIDEO); /* Initialize SDL2 */
    
    /* Create an application window with th following settings */
    window = SDL_CreateWindow("Templar", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    SDL_SetRenderDrawColor(renderer, 50, 0, 255, 255);
    
    /* Clear the screen (to blue) */
    SDL_RenderClear(renderer);
    
    /* Set the drawing color to white */
    SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
    
    SDL_Rect rect = { 220, 140, 200, 200 };
    SDL_RenderFillRect(renderer, &rect);
    
    /* Display the screen which has been drawn */
    SDL_RenderPresent(renderer);
    
    /* Wait a couple moments before quitting */
    SDL_Delay(10000);
    
    /* Destroy the window and renderer */
    /* Dynamic memory management */
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    
    /* Clean up */
    SDL_Quit();
    
    return 0;
}
