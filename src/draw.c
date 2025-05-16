#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_log.h>
#include <SDL2/SDL_render.h>
#include <string.h>
#include "structs.h"
#include "draw.h" 
#include "defs.h" 

void prepareScene(void){
  SDL_SetRenderDrawColor(app.renderer,255,95,21,255);
  SDL_RenderClear(app.renderer);
}

void presentScene(void){
  SDL_RenderPresent(app.renderer);
}

SDL_Texture *loadTexture(char *filename){

  SDL_Texture *texture;

  SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION,SDL_LOG_PRIORITY_INFO,"Loading %s",filename);

  texture =IMG_LoadTexture(app.renderer,filename);

  if (!texture) {
    SDL_Log("Failed to load texture: %s", IMG_GetError());
}

  return texture;
}

void blit(SDL_Texture *texture, int x, int y){

  SDL_Rect dest;

  dest.x = x;
  dest.y = y;
  dest.w = 128;
  dest.h = 128;
  
  //stoping player from exiting the x axis border

  if(dest.x<0)
    dest.x=0;

  if(dest.x>SCREEN_WIDTH - dest.w)
    dest.x = SCREEN_WIDTH - dest.w;

  // y axis
  if(dest.y<0)
    dest.y=0;

  if(dest.y>SCREEN_HEIGHT - dest.h)
    dest.y = SCREEN_HEIGHT - dest.h;

  
//  SDL_QueryTexture(texture,NULL,NULL,&dest.w,&dest.h);

  SDL_RenderCopy(app.renderer,texture,NULL,&dest);
}


