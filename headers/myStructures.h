typedef struct Sdl {
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Event event;
	const Uint8 *keys;
} Sdl;

typedef struct Complex {
	// Real part, imaginary part and a backup
	double r;
	double i;
	double b;
} Complex;

typedef struct Fractal {
	// See myFractal.h
	double xMove;
	double yMove;
	double zoom;
	float iMax;
} Fractal;

void free_everything(Sdl *sdl, Fractal *fractal) {
	SDL_DestroyRenderer(sdl->renderer);
	SDL_DestroyWindow(sdl->window);
	free(sdl);
	
	free(fractal);

	SDL_Quit();

	// You may observe memory leaks using this program
	// SDL2 leaks by itself
}