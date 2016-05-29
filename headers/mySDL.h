#ifndef MYSDL_H_
#define MYSDL_H_

#include <SDL2/SDL.h>

#include "myStructures.h"

Sdl *init_sdl() {
  Sdl *sdl = malloc(sizeof(Sdl));

  sdl->window = SDL_CreateWindow(
      WINDOW_TITLE,
      SDL_WINDOWPOS_UNDEFINED,
      SDL_WINDOWPOS_UNDEFINED,
      WINDOW_HEIGHT,
      WINDOW_WIDTH,
      SDL_WINDOW_SHOWN);

  sdl->renderer = SDL_CreateRenderer(sdl->window, -1, SDL_RENDERER_SOFTWARE);
  sdl->keys = SDL_GetKeyboardState(NULL);

  return sdl;
}

int is_user_pressing_escape(Sdl *sdl) {
  // Get the current pressed key
  SDL_PollEvent(&sdl->event);

  // Define if user wants to leave or not
  if (sdl->keys[SDL_SCANCODE_ESCAPE] || sdl->event.type == SDL_QUIT)
    return 1;
  else
    return 0;
}

void draw_cross(Sdl *sdl) {
  // Draw a little cross when user zooms in/out or moves
  int length = 15;
  SDL_SetRenderDrawColor(sdl->renderer, 255, 255, 255, 255);

  SDL_RenderDrawLine(sdl->renderer, WINDOW_WIDTH / 2 - length / 2, WINDOW_HEIGHT / 2, WINDOW_WIDTH / 2 + length / 2, WINDOW_HEIGHT / 2);
  SDL_RenderDrawLine(sdl->renderer, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 - length / 2, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 + length / 2);
}

#endif
