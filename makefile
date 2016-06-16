MAKEFLAGS += --silent
MAKEFLAGS += --ignore-errors

all:
	@echo "Let's make this !"
	gcc -o mandelbrot mandelbrot.c -lSDL2
	@echo "If no errors appeared, just ./mandelbrot ! Enjoy mandelbrot ! ;-)"

clean:
	rm -f mandelbrot

help:
	@echo "Juste use make (without any argument) to compile."
	@echo "Use make clean in order to delete mandelbrot."
	@echo "If you have errors during compilation, you can contact me for help."
	@echo "Windows users, you can use MinGW with this project."