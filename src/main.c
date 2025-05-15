#include <SDL2/SDL.h>
#include "structs.h"
#include "init.h" 
#include "draw.h"
#include "input.h" 
#include "defs.h" 

Entity_t player;

int main(int argc, char *argv[])
{
  memset(&app,0,sizeof(App_t));
  memset(&player,0,sizeof(Entity_t));

  initSDL();

  player.x = 0;
  player.y = (SCREEN_HEIGHT-128)/2;
  player.texture =loadTexture("assets/jet/jet1.png");

  while(1){
    prepareScene();

    doInput();

    if(player.input.up){
      player.y -= 10;
    }
    
    if(player.input.down){
      player.y += 10;
    }

    if(player.input.left){
      player.x -= 10;
    }

    if(player.input.right){
      player.x += 10;
    }


    blit(player.texture,player.x,player.y);

    presentScene();

    SDL_Delay(16);
  }

  
  return 0;
}
