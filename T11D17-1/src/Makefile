BUILDDIR=../build/

CC=gcc
CFLAGS=-Wall -Werror -Wextra -I -std=c11

all: clean door_struct list_test stack_test

door_struct: dmanager_module.o
	$(CC) dmanager_module.o -o $(BUILDDIR)Quest_1

dmanager_module.o: dmanager_module.c
	$(CC) $(CFLAGS) -c dmanager_module.c

list_test: list.o list_test.o
	$(CC) list.o list_test.o -o $(BUILDDIR)Quest_2

list.o: list.c
	$(CC) $(CFLAGS) -c list.c

list_test.o: list_test.c
	$(CC) $(CFLAGS) -c list_test.c

stack_test: stack_test.o stack.o
	$(CC) stack_test.o stack.o -o $(BUILDDIR)Quest_3

stack.o: stack.c
	$(CC) $(CFLAGS) -c stack.c

stack_test.o: stack_test.c
	$(CC) $(CFLAGS) -c stack_test.c

rebuild:
	clean door_struct

clean: 
	rm -f *.o
