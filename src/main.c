#include <SDL2/SDL.h>
#include "structs.h"
#include "init.h" 
#include "draw.h"
#include "input.h" 

int main(int argc, char *argv[])
{
  memset(&app,0,sizeof(App_t));

  initSDL();

  while(1){
    prepareScene();
    doInput();
    presentScene();
    SDL_Delay(16);
  }

  
  return 0;
}
