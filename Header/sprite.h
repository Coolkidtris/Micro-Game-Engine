#ifndef SPRITE_H
#define SPRITE_H

#include "Header/sdl.h"
#include "Header/engine.h"

/* Tileset paths*/
#define tilesetGroundPath "Tilesets/Ground.png"

/* Tile sizes*/
#define tilesetTileHeight 64
#define tilesetTileWidth 128

#define tileDrawHeight 32
#define tileDrawWidth 64

#define maxTileHeight 128
#define maxTileWidth 256

/*TESTING!!! REMOVE LATER*/
#define xSize 25
#define ySize 25

/* Tile coordinates*/
#define xNewRectPosition (150 + x * 10 - y * 10)
#define yNewRectPosition (100 + x * 5 + y * 5)


/* Sprite enums*/
enum Layer{                         // Holds all layers to display our sprites  
    Layer0,                         // Map layer
    Layer1,                         // Foliage
    Layer2,                         // Roads
    Layer3,                         // Buildings
    UI                              // UI Interface

};

/* Sprite Structures */
typedef struct{                     // Struct for a Sprite - An image rendered to the screen.
    SDL_Rect spriteSourceRect;      // The Rect responsible for finding the sprite on the tilemap (x,y,w,h)
    SDL_Rect spriteDestRect;        // The Rect responsible for the location the sprite will be drawn to

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

/* Sprite functions */
Sprite NewSprite(Vector2D spriteSheetPosition);

SDL_Rect SetSpriteSource(Sprite *spriteToSet, Vector2D size);
SDL_Rect SetSpriteDestination(Sprite *spriteToSet, Vector2D size);
Vector2D SetSpriteSize(Sprite *spriteToSize, int x, int y);

void Copy_Sprite_To_Buffer(Sprite spriteToCopy, SDL_Renderer *renderer, SDL_Texture *srcTexture);

#endif