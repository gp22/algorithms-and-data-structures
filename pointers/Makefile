#
# Makefile template
# Replace 'filename' with the name of the .c file to compile
#

pointers: pointers.c
	clang -ggdb3 -O0 -std=c11 -o pointers pointers.c -lm
# pointers: pointers.c
# 	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o pointers pointers.c -lm

callByReference: callByReference.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o callByReference callByReference.c -lm

clean:
	rm -f *.o a.out core pointers callByReference log.txt
	rm -rf *.dSYM
