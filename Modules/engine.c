

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

/* Drawing Functions */

void Draw_Buffer(SDL_Renderer *renderer){
    SDL_RenderPresent(renderer);
}

