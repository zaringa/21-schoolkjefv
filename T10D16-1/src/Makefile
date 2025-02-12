BUILDDIR=../build/

CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11

all: clean strlen_test strcmp_test strcpy_test strcat_test strchr_test strstr_test strtok_test

strlen_test: s21_string.o s21_string_test_strlen.o
	$(CC) s21_string.o s21_string_test.o -o $(BUILDDIR)Quest_1

s21_string_test_strlen.o: s21_string_test.c
	$(CC) $(CFLAGS) -c s21_string_test.c -Dstrlen_test

strcmp_test: s21_string.o s21_string_test_strcmp.o
	$(CC) s21_string.o s21_string_test.o -o $(BUILDDIR)Quest_2

s21_string_test_strcmp.o: s21_string_test.c
	$(CC) $(CFLAGS) -c s21_string_test.c -Dstrcmp_test

strcpy_test: s21_string.o s21_string_test_strcpy.o
	$(CC) s21_string.o s21_string_test.o -o $(BUILDDIR)Quest_3

s21_string_test_strcpy.o: s21_string_test.c s21_string.o
	$(CC) $(CFLAGS) -c s21_string_test.c -Dstrcpy_test

strcat_test: s21_string.o s21_string_test_strcat.o
	$(CC) s21_string.o s21_string_test.o -o $(BUILDDIR)Quest_4

s21_string_test_strcat.o: s21_string_test.c s21_string.o
	$(CC) $(CFLAGS) -c s21_string_test.c -Dstrcat_test

strchr_test: s21_string.o s21_string_test_strchr.o
	$(CC) s21_string.o s21_string_test.o -o $(BUILDDIR)Quest_5

s21_string_test_strchr.o: s21_string_test.c s21_string.o
	$(CC) $(CFLAGS) -c s21_string_test.c -Dstrchr_test

strstr_test: s21_string.o s21_string_test_strstr.o
	$(CC) s21_string.o s21_string_test.o -o $(BUILDDIR)Quest_6

s21_string_test_strstr.o: s21_string_test.c s21_string.o
	$(CC) $(CFLAGS) -c s21_string_test.c -Dstrstr_test

strtok_test: s21_string.o s21_string_test_strtok.o
	$(CC) s21_string.o s21_string_test.o -o $(BUILDDIR)Quest_7

s21_string_test_strtok.o: s21_string_test.c s21_string.o
	$(CC) $(CFLAGS) -c s21_string_test.c -Dstrtok_test

rebuild:
	clean strlen_tests

clean: 
	rm -f *.o

