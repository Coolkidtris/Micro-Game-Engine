#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>

/* Macro Definitions */
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

/*Important to note, X,Y is relative to the top left of the screen*/
#define WINDOW_POSX 0               // Determines window X position relative to the screen
#define WINDOWS_POSY 0              // Determines window Y position relative to the screen

#define maxMapSize 8                // Determines rows and columns

/* SDL Variables */
SDL_bool running = SDL_TRUE;        // Boolean of whether or not the game is running
SDL_Window *window;                 // Pointer to the window to create
SDL_Renderer *renderer;             // Pointer to the renderer used to render within the window
SDL_Texture *tileSet;               // Pointer to the texture holding the tileset.
SDL_Rect tileRect;                  // Uninitialised Rect.

/* RECT Functions */
SDL_Rect setUpRect(int x, int y, int w, int h){
    SDL_Rect newRect = {x,y,w,h};
    return newRect;
}

/* Setup Functions */
void setupSDL(){
    window = SDL_CreateWindow("Tiles", WINDOW_POSX, WINDOWS_POSY, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    renderer  = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED );
    printf("SDL setup\n");
}

/* Evaluation Functions */
void evaluateEvent(SDL_Event event){
    switch (event.type){
        case SDL_QUIT:
            running = SDL_FALSE;
            printf("Exiting Window\n");
            break;
    }
}

void pollSDL(){
    SDL_Event event;
    while (SDL_PollEvent(&event)){
        evaluateEvent(event);
    }
}

/* Main Loop*/
void mainLoop(){
    while(running == SDL_TRUE){
        pollSDL();
    }
}

/* Cleanup Functions */
void cleanupSDL(){
    SDL_DestroyTexture(tileSet);
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    printf("SDL closed\n");
}

/* Entry Point */
int main(int argc, char *argv[]) {
    setupSDL();
    mainLoop();
    cleanupSDL();

    return 0;
}