# Makefile

main: main.o print.o
	gcc -Wall -O2 -o main main.o print.o

main.o: main.c
	gcc -c main.c

print.o: print.c
	gcc -c print.c

main.o: version.h

clean:
	rm -f main main.o print.o
