.PHONY: state_sort  clear
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra

B = ../build/

all: state_sort  clear

state_sort: state_sort.c help.c $(Q1)

$(Q1): state_sort.o help.o
	$(CC) $^ -o $@


clean:
	rm -rf *.o

rebuild: clean all

format: 
	clang-format -i *.c *.h
	cppcheck --enable=all --suppress=missingIncludeSystem ./