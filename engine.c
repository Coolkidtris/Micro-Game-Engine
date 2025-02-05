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
    Vector2D spritePosition;        // Position of the Sprite in 2D space so it can be moved.
    Vector2D spriteSize;            // The size of our sprite, in width and height.
    Vector2D spriteSheetPosition;   // The position of our sprite on the sprite sheet

    SDL_Rect spriteRect;            // The Rect of the sprite so it can be rendered
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

/* Functions */
Vector2D New2D(int x, int y){
    Vector2D newVector = {x, y};
    return newVector;
}

Vector3D New3D(int x, int y, int z){
    Vector3D newVector = {x, y, z};
    return newVector;
}

SDL_Rect NewRect(Vector2D rectPos, Vector2D rectSize){
    SDL_Rect newRect = {rectPos.x, rectPos.y, rectSize.x, rectSize.y};
    return newRect;
}

Sprite NewSprite(Vector2D spritePosition, Vector2D spriteSize, Vector2D spriteSheetPosition){
    SDL_Rect spriteRect = NewRect(spritePosition, spriteSize);
    Sprite NewSprite = {spritePosition, spriteSize, spriteSheetPosition, spriteRect, SDL_TRUE, 1}; 
    return NewSprite;
}

Map NewMap(){

}
