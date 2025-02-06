#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

/* Vector Structures */
typedef struct{                     // Vector with 2 Dimensions
    int x;                          // X Axis
    int y;                          // Y Axis
}Vector2D;

typedef struct{                     // Vector with 3 Dimensions
    int x;                          // X Axis
    int y;                          // Y Axis
    int z;                          // Z Axis
}Vector3D;


/* Functions */

Vector2D New2D(int x, int y);
Vector3D New3D(int x, int y, int z);

SDL_Rect NewRect(Vector2D rectPos, Vector2D rectSize);

void Draw_Buffer(SDL_Renderer *renderer);