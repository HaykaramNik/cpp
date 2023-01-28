all:	exe

exe:	main.c solution.h lib
		gcc main.c -L. -lsolution -o solution

lib:	solution.c solution.h
		gcc -shared -o libsolution.so solution.c

clear:	
		-rm solution libsolution.so 2>/dev/null
