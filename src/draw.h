#ifndef DRAW_H
#define DRAW_H

#include <SDL2/SDL.h>

void prepareScene(void);
void presentScene(void);
void blit(SDL_Texture *texture, int x,int y);
SDL_Texture *loadTexture(char *filename);

#endif 
