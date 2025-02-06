#include "sdl.h"


SDL_version compiled;
SDL_version linked;


/* Entry Point */
int main(int argc, char *argv[]) {
    setupSDL();
    mainLoop();
    cleanupSDL();

    SDL_VERSION(&compiled);
    SDL_GetVersion(&linked);
    SDL_Log("We compiled against SDL version %u.%u.%u ...\n",
        compiled.major, compiled.minor, compiled.patch);
    SDL_Log("But we are linking against SDL version %u.%u.%u.\n",
        linked.major, linked.minor, linked.patch);

    return 0;
}