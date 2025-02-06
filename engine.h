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

/* Sprite Structures */
enum Layer{                         // Holds all layers to display our sprites  
    Layer0,                         // Map layer
    Layer1,                         // Foliage
    Layer2,                         // Roads
    Layer3,                         // Buildings
    UI                              // UI Interface

};

typedef struct{                     // Struct for a Sprite - An image rendered to the screen.
    SDL_Rect spriteSourceRect;      // The Rect responsible for finding the sprite on the tilemap (x,y,w,h)
    SDL_Rect spriteDestRect;         // The Rect responsible for the location the sprite will be drawn to

    SDL_bool spriteVisible;         // Boolean to allow the sprite to be drawn/hidden

    int layer;                      // The layer that the sprite is on - Depends on what it is
}Sprite;


typedef struct{                     // Struct for a Map - The first layer which represents the ground.
    Vector2D mapPosition;           // Position of the map in 2D space so it can be moved.
    Vector2D mapSize;               // Size of our map, in width and height.

    SDL_Texture *mapTexture;        // The texture of the map.
    SDL_Rect mapRect;               // The Rect which contains coordinates and size of the map.

    int mapLayer;                   // The layer the map is on - Nominally Layer 0.
} Map;