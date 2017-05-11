#
# Makefile template
# Replace 'filename' with the name of the .c file to compile
#

pointers: pointers.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o pointers pointers.c -lm

clean:
	rm -f *.o a.out core pointers log.txt
	rm -rf *.dSYM
