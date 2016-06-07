all:
	@echo "Please, tell me for which platform you want to compile ! :-)"
	@echo "  * GNU/Linux : make mandelbrot.out"
	@echo "  * Windows : make mandelbrot.exe (requires MinGW32)"

mandelbrot.out:
	gcc mandelbrot.c -lSDL2 -o mandelbrot.out

mandelbrot.exe:
	gcc mandelbrot.c -lmingw32 -lSDL2Main -lSDL2 -o mandelbrot.exe
