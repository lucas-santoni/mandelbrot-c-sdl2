// This file has no copyright.
// Contact : http://geographer.fr
//           geographer@geographer.fr

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

#include "headers/myStructures.h"
#include "headers/mySDL.h"
#include "headers/myFractal.h"

// Any other main prototype will bug MinGW's SDL2
// Doesn't matter on Nux
int main(int argc, char **argv) {

  // Init the structures
  Sdl *sdl = init_sdl();
  Fractal *fractal = init_fractal();

  // Init console
  print_verbose(fractal);

  // User can exit program using escape
  while (is_user_pressing_escape(sdl) == 0) {
    draw_mandelbrot(sdl, fractal);
    is_user_moving(sdl, fractal);

    SDL_RenderPresent(sdl->renderer);

    SDL_Delay(10);
  }

  free_everything(sdl, fractal);
  return 0;
}
