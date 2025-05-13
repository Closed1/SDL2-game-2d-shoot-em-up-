#include <SDL2/SDL.h>
#include "structs.h"
#include "init.h" 
#include "draw.h"
#include "input.h" 

Entity_t player;

int main(int argc, char *argv[])
{
  memset(&app,0,sizeof(App_t));
  memset(&player,0,sizeof(Entity_t));

  initSDL();

  player.x =100;
  player.y =100;
  player.texture =loadTexture("assets/jet/jet1.png");

  while(1){
    prepareScene();

    doInput();

    if(player.input.up){
      player.y -= 6;
    }
    
    if(player.input.down){
      player.y += 6;
    }

    if(player.input.left){
      player.x -= 6;
    }

    if(player.input.right){
      player.x += 6;
    }


    blit(player.texture,player.x,player.y);

    presentScene();

    SDL_Delay(16);
  }

  
  return 0;
}
