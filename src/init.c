#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include "structs.h" 
#include "defs.h"
#include "init.h" 

App_t app;

void initSDL(void){
  int renderer_Flags = SDL_RENDERER_ACCELERATED;
  int window_Flags = 0;
  IMG_Init(IMG_INIT_PNG|IMG_INIT_JPG);

  if(SDL_Init(SDL_INIT_VIDEO)<0){

    printf("SDL couldn't initialize :%s\n",SDL_GetError());
    exit(1);
  }

  app.window=SDL_CreateWindow("shooter game",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,window_Flags);

  if(!app.window){
    printf("Failed to open a window %s\n",SDL_GetError());
    exit(1);
  }

  SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,"linear");

  app.renderer = SDL_CreateRenderer(app.window,-1,renderer_Flags);

  if(!app.renderer){
    printf("Failed to create renderer %s\n",SDL_GetError());
    exit(1);
  }




}
