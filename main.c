#include "sdl.h"


SDL_version compiled;
SDL_version linked;


/* Entry Point */
int main(int argc, char *argv[]) {
    setupSDL();
    mainLoop();
    cleanupSDL();

    return 0;
}