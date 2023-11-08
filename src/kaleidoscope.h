#include <SDL2/SDL.h>
#include <stdbool.h>

bool doKaleidoscoping(SDL_Renderer* ren, SDL_Surface* srcSurface, SDL_Texture* dstTexture, double phase);

bool mirrorDiagonally(SDL_Surface* surface);

