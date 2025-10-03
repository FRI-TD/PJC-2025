.PHONY: all lib

all: moj

lib: lib/libmojlib.a

lib/libmojlib.a: srclib/mojlib.c
	gcc -c srclib/mojlib.c -o bin/mojlib.o -I./include
	ar rcs lib/libmojlib.a bin/mojlib.o

moj: src/mojprog.c lib/libmojlib.a
	gcc -I./include -L./lib -o moj src/mojprog.c -lmojlib
