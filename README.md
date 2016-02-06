# mandelbrot-c-sdl2
Using the C language and the SDL2 library to draw the Mandelbrot set.

Requirements :
* C standard library
* SDL2 library
* Possibly MinGW if running Windows

As the compilation process is rather simple, I didn't create any Makefile. Please, use :
* On Windows : `gcc -o mandelbrot mandelbrot.c -lmingw32 -lSDL2Main -lSDL2`
* On Nux : `gcc -o mandelbrot mandelbrot.c -lSDL2`

![Alt text](screenshot.png)