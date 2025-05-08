#include "structs.h"
#include <SDL2/SDL.h>

void prepareScene(void){
  SDL_SetRenderDrawColor(app.renderer,96,128,255,255);
  SDL_RenderClear(app.renderer);
}
