### Makefile ###

all: crivo

crivo: crivo.o main.o
	gcc -o crivo crivo.o main.o

crivo.o: crivo.c
	gcc -c crivo.c

main.o: main.c
	gcc -c main.c

clean:
	rm -rf *.o

rmproper: clean
	rm -rf crivo

run: crivo
	./crivo