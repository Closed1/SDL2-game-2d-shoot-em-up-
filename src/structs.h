#pragma once

#include <SDL2/SDL.h>

typedef struct{
  SDL_Renderer *renderer; 
  SDL_Window *window;
}App_t;

extern App_t app;

typedef struct{
  int up;
  int down;
  int right;
  int left;
}Input_t;

typedef struct{
  int x;
  int y;
  SDL_Texture *texture;
  Input_t input;
}Entity_t;

extern Entity_t player;
