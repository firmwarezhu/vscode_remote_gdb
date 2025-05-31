CC=gcc
CFLAGS=-g -Wall

all: buggy_program

buggy_program: buggy_program.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f buggy_program