#pragma once

#include <SDL2/SDL.h>

typedef struct{
  SDL_Renderer *renderer; 
  SDL_Window *window;
}App_t;

extern App_t app;

typedef struct{
  int x;
  int y;
  SDL_Texture *texture;
}Entity_t;

extern Entity_t player;
