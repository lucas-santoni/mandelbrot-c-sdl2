// This file has no copyright.
// Contact : http://geographer.fr
//           geographer@geographer.fr

// Windows : gcc -o mandelbrot.exe mandelbrot.c -lmingw32 -lSDL2Main -lSDL2
// Nux : gcc -o mandelbrot.out mandelbrot.c -lSDL2

// This has to be a square
#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 600

#define WINDOW_TITLE "Mandelbrot Fractal // Geographer"

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

	// User can exit program using escape
	while (is_user_pressing_escape(sdl) == 0) {
		draw_mandelbrot(sdl, fractal);
		is_user_moving(sdl, fractal);

		SDL_RenderPresent(sdl->renderer);
		print_verbose(fractal);

		SDL_Delay(10);
	}

	free_everything(sdl, fractal);
	return 0;
}