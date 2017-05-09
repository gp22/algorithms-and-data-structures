#
# Makefile template
# Replace 'filename' with the name of the .c file to compile
#

filename: filename.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o filename filename.c -lm

clean:
	rm -f *.o a.out core filename log.txt
	rm -rf *.dSYM
