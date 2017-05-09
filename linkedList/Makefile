#
# Makefile
#

insertAtBeginning: insertAtBeginning.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o insertAtBeginning insertAtBeginning.c

insert: insert.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o insert insert.c

clean:
	rm -f *.o a.out core insertAtBeginning insert log.txt
	rm -rf *.dSYM