#ifdef WIN32
    #include <SDL.h>
#else
    #include <SDL2/SDL.h>
#endif

#include <stdbool.h>

bool doKaleidoscopingA(SDL_Renderer* ren, SDL_Surface* srcSurface, SDL_Texture* dstTexture);
bool doKaleidoscoping(SDL_Renderer* ren, SDL_Surface* srcSurface, SDL_Texture* dstTexture);

bool mirrorDiagonallyA(SDL_Surface* surface);
bool mirrorDiagonally(SDL_Surface* surface);

