#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keycode.h>
#include <SDL2/SDL_scancode.h>
#include <stdlib.h>
#include "input.h"
#include "structs.h" 

SDL_Event event;

void doInput(void){

  while(SDL_PollEvent(&event)){

    switch(event.type){

      case SDL_QUIT:
        exit(0);
        break;

      case SDL_KEYDOWN:
        keyPressed(&event.key);
        break;

      case SDL_KEYUP:
        keyReleased(&event.key);
        break;

      default:
       break;
    }
  }
}

void keyPressed(SDL_KeyboardEvent *event){

  if(event->repeat==0){

    switch (event->keysym.scancode){

      case SDL_SCANCODE_UP:
        player.input.up = 1;
        break;

      case SDL_SCANCODE_DOWN:
        player.input.down = 1;
        break;

      case SDL_SCANCODE_RIGHT:
        player.input.right = 1;
        break;

      case SDL_SCANCODE_LEFT:
        player.input.left = 1;
        break;
    }

  }
}
void keyReleased(SDL_KeyboardEvent *event){

  if(event->repeat==0){

    switch (event->keysym.scancode){
      case SDL_SCANCODE_UP:
        player.input.up = 0;
        break;

      case SDL_SCANCODE_DOWN:
        player.input.down = 0;
        break;

      case SDL_SCANCODE_RIGHT:
        player.input.right = 0;
        break;

      case SDL_SCANCODE_LEFT:
        player.input.left = 0;
        break;
    }
  }



}
