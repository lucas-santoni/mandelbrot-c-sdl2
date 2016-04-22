# mandelbrot-c-sdl2

Using the C language and the SDL2 library to draw the Mandelbrot set.

Requirements :

*   C standard library
*   SDL2 library
*   Possibly MinGW if running Windows

As the compilation process is rather simple, I didn't create any Makefile.
Please, use :

*   Windows : `gcc -o mandelbrot.exe mandelbrot.c -lmingw32 -lSDL2Main -lSDL2`
*   Nux : `gcc -o mandelbrot.out mandelbrot.c -lSDL2`

![screenshot](screenshot.png)
