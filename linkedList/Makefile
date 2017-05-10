#
# Makefile
#

insertAtBeginning: insertAtBeginning.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o insertAtBeginning insertAtBeginning.c

insert: insert.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o insert insert.c

delete: delete.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o delete delete.c

clean:
	rm -f *.o a.out core insertAtBeginning insert delete log.txt
	rm -rf *.dSYM