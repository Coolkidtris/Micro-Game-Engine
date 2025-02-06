#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <stdio.h>
#include <stdlib.h>

#include "Header/engine.h"
#include "Header/sprite.h"

/* Macro Definitions */
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

/*Important to note, X,Y is relative to the top left of the screen*/
#define WINDOW_POSX 0               // Determines window X position relative to the screen
#define WINDOWS_POSY 0              // Determines window Y position relative to the screen

#define maxMapSize 8                // Determines rows and columns

/* Variables */
extern SDL_bool running;                   // Boolean of whether or not the game is running
extern SDL_Window *window;                 // Pointer to the window to create
extern SDL_Renderer *renderer;             // Pointer to the renderer used to render within the window
extern SDL_Texture *tileSet;               // Pointer to the texture holding the tileset.

/* Functions */
void setupSDL();
void evaluateEvent(SDL_Event event);
void pollSDL();
void cleanupSDL();
void mainLoop();