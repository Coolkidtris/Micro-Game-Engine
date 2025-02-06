#include "Header/engine.h"
#include "Header/sdl.h"

/* RECT Functions */
SDL_Rect setUpRect(int x, int y, int w, int h){
    SDL_Rect newRect = {x,y,w,h};
    return newRect;
}

/* Setup Functions */
void setupSDL(){
    running = SDL_TRUE;
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