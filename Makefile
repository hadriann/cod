CC = cc
CFLAGS = -Wall -Wextra -pedantic -std=c11 -lncurses

bin/cod: src/main.c src/Term.c src/Text.c
	$(CC) $? -o $@ $(CFLAGS)

clean:
	$(RM) bin/*
