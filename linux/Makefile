all: exe lib

exe:	main.c hello.h lib
		gcc main.c -L. -lHello -o hello

lib:	hello.h hello.c
		gcc -shared -o libHello.so hello.c

clear: 
		rm hello
		rm libHello.so
		rm *.o
