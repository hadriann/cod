CC = cc
CFLAGS = -Wall -Wextra -pedantic -std=c11 -lncurses

all: clean bin bin/cod

bin/cod: src/main.c src/Term.c src/Text.c
	$(CC) $? -o $@ $(CFLAGS)

bin:
	mkdir bin

clean:
	$(RM) bin/*
