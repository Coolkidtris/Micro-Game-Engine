#include "Header/engine.h"
#include "Header/sdl.h"

/* Data Functions */
Vector2D New2D(int x, int y){
    Vector2D newVector = {x, y};
    return newVector;
}

Vector3D New3D(int x, int y, int z){
    Vector3D newVector = {x, y, z};
    return newVector;
}

SDL_Rect NewRect(Vector2D rectPos, Vector2D rectSize){
    SDL_Rect newRect ={rectPos.x, rectPos.y, rectSize.x, rectSize.y};
    return newRect;
}

Sprite NewSprite(Vector2D spritePosition, Vector2D spriteSize, Vector2D spriteSheetPosition){
    SDL_Rect sourceRect = NewRect(spritePosition, spriteSize);
    SDL_Rect destRect = NewRect(spriteSheetPosition, spriteSize);

    Sprite newSprite = {sourceRect, destRect, SDL_TRUE, 1};
    return newSprite;
}

Map NewMap(){
    
}

/* Drawing Functions */
void Copy_Sprite_To_Buffer(Sprite spriteToCopy, SDL_Renderer *renderer){
    SDL_Rect *srcPtr = &spriteToCopy.spriteSourceRect;
    SDL_Rect *destPtr = &spriteToCopy.spriteDestRect;
    
    SDL_RenderCopy(renderer, tileSet, srcPtr, destPtr);
    printf("Copying to buffer\n"); 
}

void Draw_Buffer(SDL_Renderer *renderer){
    SDL_RenderPresent(renderer);
}

