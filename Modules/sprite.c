
#include "Header/sprite.h"
#include "Header/engine.h"

Sprite NewSprite(Vector2D spriteSheetPosition){                         // Create an empty sprite
    SDL_Rect sourceRect;
    SDL_Rect destRect;

    Sprite newSprite = {sourceRect, destRect, SDL_TRUE, 1};
    return newSprite;
}

SDL_Rect SetSpriteSource(Sprite *spriteToSet, Vector2D position){
    spriteToSet->spriteSourceRect.x = position.x;
    spriteToSet->spriteSourceRect.y = position.y;

    spriteToSet->spriteSourceRect.w = tileDrawWidth;         // THESE NEED TO BE CHANGED
    spriteToSet->spriteSourceRect.h = tileDrawHeight;

    return spriteToSet->spriteSourceRect;
}

SDL_Rect SetSpriteDestination(Sprite *spriteToSet, Vector2D position){
    SDL_Rect rectToChange = spriteToSet->spriteDestRect;

    return rectToChange;
}

Vector2D SetSpriteSize(Sprite *spriteToSize, int x, int y){
    Vector2D newVector;

    return newVector;
}

//SDL_Rect sourceRect = NewRect((Vector2D) {0,0}, (Vector2D) {0,0});
//SDL_Rect destRect = NewRect(spriteSheetPosition, (Vector2D) {0,0});

void Copy_Sprite_To_Buffer(Sprite spriteToCopy, SDL_Renderer *renderer, SDL_Texture *srcTexture){
    SDL_Rect *srcPtr = &spriteToCopy.spriteSourceRect;
    SDL_Rect *destPtr = &spriteToCopy.spriteDestRect;
    
    SDL_RenderCopy(renderer, srcTexture, srcPtr, destPtr);
    printf("Copying to buffer\n"); 
}

void Copy_Map_To_Buffer(){
    
}