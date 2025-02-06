

Sprite NewSprite(Vector2D spritePosition, Vector2D spriteSize, Vector2D spriteSheetPosition){
    SDL_Rect sourceRect = NewRect(spritePosition, spriteSize);
    SDL_Rect destRect = NewRect(spriteSheetPosition, spriteSize);

    Sprite newSprite = {sourceRect, destRect, SDL_TRUE, 1};
    return newSprite;
}

void Copy_Sprite_To_Buffer(Sprite spriteToCopy, SDL_Renderer *renderer, SDL_Texture *srcTexture){
    SDL_Rect *srcPtr = &spriteToCopy.spriteSourceRect;
    SDL_Rect *destPtr = &spriteToCopy.spriteDestRect;
    
    SDL_RenderCopy(renderer, srcTexture, srcPtr, destPtr);
    printf("Copying to buffer\n"); 
}

Map NewMap(){
    
}