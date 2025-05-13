#ifndef INPUT_H
#define INPUT_H

#include <SDL2/SDL_events.h>

void doInput(void);
void keyPressed(SDL_KeyboardEvent *event);
void keyReleased(SDL_KeyboardEvent *event);

#endif 
