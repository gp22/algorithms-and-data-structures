#
# Makefile template
# Replace 'filename' with the name of the .c file to compile
#

insertionSort: insertionSort.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o insertionSort insertionSort.c -lm

clean:
	rm -f *.o a.out core insertionSort log.txt
	rm -rf *.dSYM
